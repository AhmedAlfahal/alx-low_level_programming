#include "lists.h"

/**
*	free_list - free the list
*
*	@head: list_t
*
*	Return: void
**/

void free_list(list_t *head)
{
	list_t	*tmp = NULL;

	if (!head)
		return;
	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
