#include "lists.h"

/**
*	print_listint - prints all the nodes in a linked list
*
*	@h: listint_t *
*
*	Return: total number of nodes
**/

size_t print_listint(const listint_t *h)
{
	size_t	i = 0;
	listint_t	*tmp = (listint_t *) h;

	if (!tmp)
		return (0);
	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		i++;
	}
	return (i);
}
