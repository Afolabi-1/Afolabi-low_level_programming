#include "lists.h"

/**
 * get_dnodeint_at_index - Looks for  a node in the dlistint_t list.
 * @head: The head of the list.
 * @index: The node to locate.
 *
 * Return: null if node doesn't exist
 *         Otherwise the address of the located node.
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
