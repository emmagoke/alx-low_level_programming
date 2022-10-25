#include "lists.h"

/**
 * add_nodeint - This function add a node at the beginning
 * of a linked list.
 * @head: The pointer to the head of a linked list.
 * @n: The number to be added to a node.
 * Return: A pointer to the head of the linked list.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
