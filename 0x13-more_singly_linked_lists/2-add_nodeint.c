#include "lists.h"

/**
*	add_nodeint - adds a node the list
*
*	@head: listint_t **
*
*	@n: int
*
*	Return: total number of nodes
**/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t	*tmp = malloc(sizeof(listint_t) * 1);

	if (!tmp)
		return (NULL);
	bzero(tmp, sizeof(listint_t) * 1);
	tmp->n = n;
	if (!head)
		return (tmp);
	tmp->next = (*head);
	(*head) = tmp;
	return (tmp);
}
