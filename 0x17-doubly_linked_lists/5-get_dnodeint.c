#include "lists.h"

/**
 * get_dnodeint_at_index - Finds a node in the dlistint_t list.
 * @head: The head node of the list.
 * @index: The node to be found.
 *
 * Return: If the node does not exist - NULL.
 *         Otherwise - the address of the located node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
