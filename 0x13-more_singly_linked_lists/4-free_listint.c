#include "lists.h"

/**
*	free_listint - free the list
*
*	@head: listint_t *
*
*	Return: void
**/

void free_listint(listint_t *head)
{
	listint_t	*tmp = NULL;

	if (!head)
		return;
	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
