#include "lists.h"
#include <string.h>

/**
 * add_node_end - This function adds a new node at the end of a list_t list.
 * @head: This is the head of the linked list.
 * @str: The string to be added.
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = (list_t *)malloc(sizeof(list_t));
	list_t *temp2 = *head;

	if (temp != NULL)
	{
		temp->str = strdup(str);
		temp->len = strlen(str);
		temp->next = NULL;

		if (temp2 != NULL)
		{
			while (temp2->next != NULL)
			{
				temp2 = temp2->next;
			}
		}
		if (*head == NULL)
			*head = temp;
		else
			temp2->next = temp;
	}
	return (*head);	
}
