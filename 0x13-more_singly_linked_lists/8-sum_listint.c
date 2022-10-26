#include "lists.h"

/**
 * sum_listint - This function all the data (n) of a
 * listint_t linked list.
 * @head: The pointer to the head of the linked list.
 * Return: the sum of all the data (n) of a listint_t linked list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	if (temp == NULL)
		return (sum);

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
