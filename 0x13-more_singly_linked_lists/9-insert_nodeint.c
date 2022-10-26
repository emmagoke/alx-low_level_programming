#include "lists.h"

unsigned int len(listint_t *head);
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

	if (new == NULL || idx > len(*head))
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (idx == 0 && head != NULL)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (i = 0; i < idx - 1; i++)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
	}
	if (temp->next != NULL)
	{
		new->next = temp->next;
		temp->next = new;
		return (new);
	}
	return (NULL);
}

/**
 * len - Calculate the length of a linked list.
 * @head: The pointer to the head of the linked list.
 * Return: The length of the linked list.
 */
unsigned int len(listint_t *head)
{
	unsigned int len = 0;
	listint_t *temp = head;

	while (temp != NULL)
	{
		len += 1;
		temp = temp->next;
	}
	return (len);
}
