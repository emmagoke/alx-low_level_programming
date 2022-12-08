#include "lists.h"

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
