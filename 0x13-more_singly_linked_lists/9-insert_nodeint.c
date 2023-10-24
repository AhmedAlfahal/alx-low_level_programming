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
	(void)head;
	(void)idx;
	(void)n;
	return ((*head)->next);
}
