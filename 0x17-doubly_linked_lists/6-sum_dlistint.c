#include "lists.h"

/**
 * sum_dlistint - Adds all the elements of the dlistint_t list.
 * @head: The head node of the list.
 *
 * Return: The total sum.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
