#include "lists.h"

/**
 * insert_dnodeint_at_index - This function inserts a new node at
 * a given position.
 * @h: The pointer to the head of dlistint_t
 * @idx: is the index of the list where the new node should be added.
 * Index starts at 0
 * @n: The data to be inserted into the node.
 * Return: the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int n_node = 0;
	dlistint_t *current, *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = NULL;
	current = *h;
	if (idx == 0)
	{
		add_dnodeint(h, n);
		return (newnode);
	}
	while (current != NULL)
	{
		if (n_node == (idx - 1))
		{
			newnode->next = current->next;
			current->next = newnode;
			return (newnode);
		}
		n_node += 1;
		current = current->next;
	}
	return (NULL);
}
