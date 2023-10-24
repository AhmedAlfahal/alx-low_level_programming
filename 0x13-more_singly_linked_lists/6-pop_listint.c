#include "lists.h"

/**
*	pop_listint - remove the first element in the linked list
*
*	@head: listint_t **
*
*	Return: the element that was removed
**/

int pop_listint(listint_t **head)
{
	int	n_data = 0;
	listint_t	*n = NULL;

	if (!head || !(*head))
		return (0);
	n = (*head);
	(*head) = (*head)->next;
	n_data = n->n;
	return (free(n), n_data);
}
