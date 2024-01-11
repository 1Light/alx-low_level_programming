#include "lists.h"

/**
 * print_dlistint - Lists the members of a dlistint_t list.
 * @h: The head node of the list.
 *
 * Return: Te total quantity of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
