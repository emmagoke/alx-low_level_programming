#include "lists.h"

/**
 * pop_listint - This function deletes the head node of a
 * listint_t linked list
 * @head: The pointer to the head of the linked list.
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *temp;

	if (*head == NULL)
		return (n);
	temp = *head;
	n = temp->n;
	*head = (*head)->next;
	free(temp);

	return (n);
}
