#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index -  inserts a new node at a given position
 * @h: A pointer to the first node
 * @idx: The index where the node is to be inserted
 * @n: The element to be added
 * Return: A pointer to the new node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)

{
	dlistint_t *headcopy = *h;
	dlistint_t *new = NULL;
	unsigned int i;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (h == NULL)
		return (NULL);
	if (*h == NULL || idx == 0)
		return (add_dnodeint(h, n));
	for (i = 0; (i < idx - 1) && (headcopy); i++)
		headcopy = headcopy->next;
	if (headcopy == NULL)
		return (NULL);
	if (headcopy->next == NULL)
		return (add_dnodeint_end(h, n));
	new = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	headcopy->next->prev = new;
	new->prev = headcopy;
	new->next = headcopy->next;
	headcopy->next = new;
	return (new);
}
