#include "lists.h"

/**
 * get_dnodeint_at_index - This function checks for the
 * index in the dlistint_t
 * @head: The head of the dlistint_t
 * @index: is the index of the node, starting from 0
 * Return: the nth node of a dlistint_t linked list or
 * NULL if the node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int n_node = 0;

	current = head;
	while (current != NULL)
	{
		if (n_node == index)
			return (current);
		n_node += 1;
		current = current->next;
	}
	return (NULL);
}
