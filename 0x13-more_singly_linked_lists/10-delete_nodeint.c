#include "lists.h"

/**
 * delete_nodeint_at_index - This function deletes the node at index
 * index of a listint_t linked list.
 * @head: The pointer to the head node of the list.
 * @index: is the index of the node that should be deleted.
 * Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *temp2 = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (temp2 == NULL)
			return (-1);
		temp2 = temp2->next;
	}
	if (temp2->next != NULL)
	{
		temp = temp2->next;
		temp2->next = temp->next;
		free(temp);
		return (1);
	}
	return (-1);
}
