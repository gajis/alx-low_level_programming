#include "lists.h"

/**
 * add_nodeint_end - Function to add node at end of listint_t
 * @head: pointer
 * @n: integer
 * Return: address
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *day;
	listint_t *cob;

	day = malloc(sizeof(listint_t));

	if (day == NULL)
		return (NULL);

	cob = *head;
	day->n = n;
	day->next = NULL;

	if (*head == NULL)
	{
		*head = day;
		return (day);
	}

	while (cob->next != NULL)
		cob = cob->next;

	cob->next = day;
	return (day);
}
