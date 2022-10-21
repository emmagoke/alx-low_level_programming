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
	list_t *temp = (list_t *)malloc(sizeof(list_t));

	if (temp != NULL)
	{
		temp->str = h->str;
		temp->len = h->len;
		temp->next = h->next;
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
	}
	free(temp);
	return (len);
}
