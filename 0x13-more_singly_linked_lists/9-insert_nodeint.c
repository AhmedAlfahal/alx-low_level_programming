#include "lists.h"

/**
*	insert_nodeint_at_index - insert the node at @idx'th index
*
*	@head: listint_t **
*
*	@idx: unsigned int
*
*	@n: int
*
*	Return: the node at the index
**/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t		*h = NULL;
	listint_t		*tmp = NULL;

	h = (*head);
	tmp = h;
	idx++;
	tmp = h->next;
	h->next = malloc(sizeof(listint_t));
	h->next->n = n;
	h->next->next = tmp;
	return (h->next);
}
