#include "lists.h"

/**
 * add_dnodeint - This function adds a new node at the
 * beginning of a dlistint_t list.
 * @head: The pointer to head of the list
 * @n: The value to be adde to the node.
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = getnode(n);
	if (*head == NULL)
	{
		*head = newnode;
		return (*head);
	}
	if (newnode != NULL)
	{
		(*head)->prev = newnode;
		newnode->next = *head;
		*head = newnode;
		return (*head);
	}
	return (NULL);
}

/**
 * getnode - This create a new node from the heap
 * @n: The value to be added to the new node.
 * Return: The pointer to the newly created node.
 */
dlistint_t *getnode(const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		printf("Malloc error");
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	return (new);
}
