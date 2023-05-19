#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: double pointer
 * @index: index at which to delete the node
 *
 * Return: 1 success, -1 failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)

{
	unsigned int i = 0;
	dlistint_t *current = *head;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		if (current->next != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	while (i < index && current)
	{
		current = current->next;
		i++;
	}

	if (current == NULL)
		return (-1);

	current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;
	free(current);
	return (1);
}
