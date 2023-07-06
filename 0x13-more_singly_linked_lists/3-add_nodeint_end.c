#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Add a new node at the beginning of a list.
 * @head: Address of the first node of a list.
 * @n: Integer to insert into the new node.
 * Return: Address of the new node.
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tp;
	listint_t *temp = *head;

	tp = malloc(sizeof(listint_t));
	if (!tp)
		return (NULL);

	tp->n = n;
	tp->next = NULL;

	if (*head == NULL)
	{
		*head = tp;
		return (tp);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = tp;

	return (tp);
}
