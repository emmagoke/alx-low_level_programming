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

	while (*temp2 != NULL)
	{
		temp = *temp2;
		*temp2 = (*temp2)->next;
		free(temp);
	}
	temp2 = NULL;
}
