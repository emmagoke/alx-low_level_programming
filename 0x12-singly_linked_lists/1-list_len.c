#include "lists.h"

/**
 * list_len - This function calculate the number
 * of element in a linked list.
 * @h: The head of the linked list.
 * Return: the number of elements in a linked list_t list.
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
