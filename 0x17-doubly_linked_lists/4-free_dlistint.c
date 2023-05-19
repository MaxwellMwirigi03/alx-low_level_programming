#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - frees a lost by adding node at the beginning
 * @head: head
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *n;

	while (head != NULL)
	{
		n = head->next;
		free(head);
		head = n;
	}
}
