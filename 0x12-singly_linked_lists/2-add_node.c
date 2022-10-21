#include "lists.h"
#include <string.h>

/**
 * add_node - This function adds a new node at the
 *  beginning of a list_t list.
 *  @head: The head node of the linked list.
 *  @str: The string to be add to the list.
 *  Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = (list_t *)malloc(sizeof(list_t));

	if (temp != NULL)
	{
		temp->str = strdup(str);
		temp->len = strlen(str);
		temp->next = NULL;
		if (*head != NULL)
			temp->next = *head;
		*head = temp;;
	}
	return (*head);
}
