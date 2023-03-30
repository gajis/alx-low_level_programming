#include "lists.h"
/**
 * print_list - Function that prints all the elements
 * @h: list
 * Return: number of elements
 */

size_t print_list(const list_t *h)
{
	size_t index;

	index = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		index++;
	}
	return (index);
}
