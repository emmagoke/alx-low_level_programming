#include "lists.h"

/**
 * print_list - Print the string and the len of each
 * content of a linked lists
 * @h: The pointer of the head of the list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t len = 0;
	const list_t *temp = h;

	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", temp->len, temp->str);
		}
		len++;
		temp = temp->next;
	}
	return (len);
}
