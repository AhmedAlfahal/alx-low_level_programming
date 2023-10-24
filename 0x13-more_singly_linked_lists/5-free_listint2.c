#include "lists.h"

/**
*	_free_listint - free recersion
*
*	@head: listint_t *
*
*	Return: Void
**/
void	_free_listint(listint_t *head)
{
	if (!head)
		return;
	_free_listint(head->next);
	free(head);
}

/**
*	free_listint2 - free int list
*
*	@head: listint_t *
*
*	Return: Void
**/

void	free_listint2(listint_t **head)
{
	if (!head)
		return;
	_free_listint(*head);
	*head = NULL;
}
