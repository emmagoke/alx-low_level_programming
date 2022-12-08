#include "lists.h"

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *current;

	current = *head;
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return NULL;
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
		return (*head);
	}
	while (current->next != NULL)
		current = current->next;
	current->next = newnode;
	newnode->prev = current;
	return (*head);
}
