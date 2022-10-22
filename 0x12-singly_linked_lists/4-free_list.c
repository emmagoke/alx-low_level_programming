#include "lists.h"

/**
 * free_list - This function frees a list_t list.
 * @head: The head of the linked list.
 * Return: Nothing.
 */
void free_list(list_t *head)
{
	list_t *temp = NULL;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
