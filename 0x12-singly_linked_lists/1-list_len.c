#include "lists.h"
#include <stddef.h>

/**
*	list_len - returns the size of the list
*
*	@h: list_t
*
*	Return: total number of nodes
**/

size_t list_len(const list_t *h)
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
