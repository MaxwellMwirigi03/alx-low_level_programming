#include "lists.h"
#include <stdlib.h>
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: head
 * @index: index
 * Return: address of node or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	current = head;
	i = 0;
	while (current)
	{
		if (i == index)
			return (current);
		current = current->next;
		i++;
	}
	return (NULL);
}
