#include "lists.h"


/**
*	add_nodeint_end - adds a node at the end of the list
*
*	@head: listint_t **
*
*	@n: const int
*
*	Return: total number of nodes
**/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t	*h = NULL;
	listint_t	*b = NULL;
	listint_t	*tmp = malloc(sizeof(listint_t) * 1);

	if (!tmp)
		return (NULL);
	bzero(tmp, sizeof(listint_t) * 1);
	tmp->n = n;
	tmp->next = NULL;
	if (!head)
		return (tmp);
	else if (!(*head))
	{
		(*head) = tmp;
		return (tmp);
	}
	h = (*head);
	while (h)
	{
		b = h;
		h = h->next;
	}
	b->next = tmp;
	return (*head);
}
