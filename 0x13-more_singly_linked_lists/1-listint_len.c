#include "lists.h"

/**
 * listint_len - Function that prints elements of a list_t list.
 * @h: input
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	int index = 0;

	while (h != NULL)
	{
		h = h->next;
		index++;
	}
	return (index);
}
