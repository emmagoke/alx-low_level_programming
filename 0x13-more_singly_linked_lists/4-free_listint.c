#include "lists.h"

/**
 * free_listint - This function frees a listint_t list.
 * @head: The head of the linked list.
 * Return: Nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
