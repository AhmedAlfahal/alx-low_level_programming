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
	listint_t	*h = *head;
	listint_t	*tmp = *head;

	if (!h)
		return;
	(*head) = NULL;
	while (h)
	{
		tmp = h;
		h = h->next;
		free(tmp);
	}
}
