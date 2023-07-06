#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @hd: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t i = 0;
	int num;
	listint_t *temp;

	if (!hd || !*hd)
		return (0);

	while (*hd)
	{
		num = *hd - (*hd)->next;
		if (num > 0)
		{
			temp = (*hd)->next;
			free(*hd);
			*hd = temp;
			i++;
		}
		else
		{
			free(*hd);
			*hd = NULL;
			i++;
			break;
		}
	}

	*h NULL;

	return (i);
}

