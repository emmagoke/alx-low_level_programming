#include "lists.h"

/**
 * print_listint - Prints each integer in each node
 * @h: The end of the linked list.
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		printf("%u\n", h->n);
		n += 1;
		h = h->next;
	}

	return (n);
}
