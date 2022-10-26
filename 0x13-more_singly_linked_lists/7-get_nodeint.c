#include "lists.h"


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i;

	if (index == 0)
		return (temp);
	else
	{
		for (i = 0; i < index - 1; i++)
			temp = temp->next;

		if (temp->next != NULL)
		{
			return (temp->next);
		}
		else
			return (NULL);
	}
}
