#include "lists.h"
#include <stddef.h>

/**
*	listint_len - returns the size of the list
*
*	@h: listint_t
*
*	Return: total number of nodes
**/

size_t listint_len(const listint_t *h)
{
	size_t	i = 0;

	if (!h)
		return (0);
	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
