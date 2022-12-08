#include "lists.h"

/**
 * dlistint_len - The function calculates the number
 * of node in a linked list.
 * @h: The pointer to head of the dlistint_t
 * Return: the number of elements in a linked dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n_node = 0;
	const dlistint_t *current;

	current = h;
	while (current != NULL)
	{
		n_node += 1;
		current = current->next;
	}
	return (n_node);
}
