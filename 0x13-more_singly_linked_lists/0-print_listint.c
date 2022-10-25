#include "lists.h"

/**
 * print_listint - Prints each integer in each node
 * @h: The end of the linked list.
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;
	const listint_t *temp = h;

	while (temp != NULL)
	{
		printf("%u\n", temp->n);
		temp = temp->next;
		n += 1;
	}

	return (n);
}
