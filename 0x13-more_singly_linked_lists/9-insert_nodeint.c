#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @indx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int indx, int n)
{
	listint_t *first_node, *temp;
	unsigned int k = 0;

	if (*head == NULL && indx != 0)
		return (NULL);
	if (indx != 0)
	{
	temp = *head;
	for (; k < indx - 1 && temp != NULL; k++)
		temp = temp->next;
	if (temp == NULL)
		return (NULL);
	}
	first_node = malloc(sizeof(listint_t));
	if (first_node == NULL)
		return (NULL);
	first_node->n = n;
	if (indx == 0)
	{
		first_node->next = *head;
		*head = first_node;
		return (first_node);
	}
	first_node->next = temp->next;
	temp->next = first_node;
	return (first_node);
}
