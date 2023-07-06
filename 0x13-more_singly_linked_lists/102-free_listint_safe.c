#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @hd: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */

#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t num = 0;
	int ind;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		ind = *h - (*h)->next;
		if (ind > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			num++;
		}
		else
		{
			free(*h);
			*h = NULL;
			num++;
			break;
		}
	}

	*h = NULL;

	return (num);
}

