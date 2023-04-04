#include "lists.h"

/**
 * free_listint - Function that frees a listint_t list
 * @head: pointer
 */
void free_listint(listint_t *head)
{
	listint_t *numb;

	if (!head)
		return;
	while (head)
	{
		numb = head;
		head = head->next;
		free(numb);
	}
	head = NULL;
}
