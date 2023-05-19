#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint -  adds a new node at the beginning of a dlistint_t list.
 * @head: head
 * @n: value
 * Return: address of new element or NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)

{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = (dlistint_t *) malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;
	if (new->next)
		(new->next)->prev = new;
	return (new);
}
