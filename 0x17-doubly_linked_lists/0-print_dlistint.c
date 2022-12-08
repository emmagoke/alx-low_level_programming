#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - This function prints all the elements
 * of a dlistint_t list.
 * @h: The pointer to the head of the dlistint.
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n_node = 0;
	const dlistint_t *current;

	current = h;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		n_node += 1;
		current = current->next;
	}
	return (n_node);
}
