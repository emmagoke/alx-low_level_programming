#include "lists.h"

/**
 * listint_len - Calculate the length of a list.
 * @h: The head of the linked list.
 * Return: the number of elements in a linked listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len += 1;
		h = h->next;
	}

	return (len);
}
