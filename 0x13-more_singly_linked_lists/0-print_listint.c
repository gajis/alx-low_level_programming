#include <stdio.h>
#include "lists.h"
/**
  * print_listint - Function that prints all elements of listint_t list
  * @h: pointer to first element
  *
  * Return:  number of nodes
  */
size_t print_listint(const listint_t *h)
{
	int numb;

	numb = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		numb++;
	}

	return (numb);
}
