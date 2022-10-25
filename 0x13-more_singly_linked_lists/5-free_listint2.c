#include "lists.h"

/**
 * listint2 - This function frees a listint_t list and
 * sets the head to NULL
 * @head: The head of the linked list.
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
