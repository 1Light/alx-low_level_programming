#include "lists.h"

/**
 * dlistint_len - Tallies the elements in a linked dlistint_t list.
 * @h: The head node of the list.
 *
 * Return: The total quantity of the members in dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
