#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Function that add a new node at the beginning of a list.
 * @head: Address of the first node
 * @n: Integer
 * Return: Address
 **/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add;

	add = malloc(sizeof(listint_t));
	if (add == NULL)
		return (NULL);

	add->n = n;
	add->next = *head;
	*head = add;
	return (*head);
}
