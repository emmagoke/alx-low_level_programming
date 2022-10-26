#include "lists.h"

/**
 * insert_nodeint_at_index - This function inserts a new node at
 * a given position.
 * @head: The pointer to head of the linked list.
 * @idx: is the index of the list where the new node should
 * be added. Index starts at 0
 * @n: The data to be inserted in the list.
 * Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *temp = *head;
	unsigned int i;

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if ((idx == 0) && temp != NULL)
	{
		new->next = temp;
		temp = new;
		return (temp);
	}
	for (i = 1; i < idx; i++)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
	}
	if (temp->next != NULL)
	{
		new->next = temp->next;
		temp->next = new;
		return (*head);
	}
	return (NULL);
}
