#include "lists.h"

/**
 * get_nodeint_at_index - This function the nth node of a
 * listint_t linked list.
 * @head: The pointer to head of a linked list.
 * @index: is the index of the node, starting at 0
 * Return: The node of the index.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i;

	if (index == 0)
		return (temp);
	else
	{
		for (i = 0; i < index - 1; i++)
		{
			if (temp == NULL)
				return (NULL);
			temp = temp->next;
		}

		if (temp->next != NULL)
		{
			return (temp->next);
		}
		else
			return (NULL);
	}
}
