#include "lists.h"

/**
 * add_nodeint_end - This function adds a node to the
 * end of a list.
 * @head: The pointer to head of the linked list
 * @n: The data to be added to the linked list.
 * Return: The pointer to the head of the linked list.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *temp;

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		temp = *head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	return (*head);
}
