#include "lists.h"

/**
*	sum_listint - sum all the list
*
*	@head: listint_t *
*
*	Return: sum of all the list
**/

int sum_listint(listint_t *head)
{
	int	sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
