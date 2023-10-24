#include "lists.h"

/**
*	free_listint2 - free the list
*
*	@head: listint_t *
*
*	Return: void
**/

void free_listint2(listint_t **head)
{
	listint_t	*h = (*head)->next;
	listint_t	*tmp = h;

	if (!h || !head)
		return;
	while (h)
	{
		tmp = h;
		h = h->next;
		free(tmp);
	}
	free((*head));
	(*head) = NULL;
}
