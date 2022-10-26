#include "lists.h"

/**
 * free_listint2 - This function frees a listint_t list and
 * sets the head to NULL
 * @head: The head of the linked list.
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t **temp2 = head;

	if (temp2 != NULL)
	{
		while (*head != NULL && temp2 != NULL)
		{
			temp = *head;
			*head = (*head)->next;
			free(temp);
		}
		*temp2 = NULL;
	}
}
