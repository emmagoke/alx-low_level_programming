#include "lists.h"

/**
 * sum_dlistint - This function sums all the data(n)
 * in the dlistint_t.
 * @head: The head of the pointer of the dlistint_t
 * Return: the sum of all the data (n) of a dlistint_t
 * linked list or 0 if the list empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current;

	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
