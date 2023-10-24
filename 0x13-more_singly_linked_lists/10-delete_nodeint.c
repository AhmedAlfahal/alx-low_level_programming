#include "lists.h"

/**
*	delete_nodeint_at_index - insert the node at @index'th index
*
*	@head: listint_t **
*
*	@index: unsigned int
*
*	Return: the node at the index
**/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int	i = 0;
	listint_t		*h = NULL;
	listint_t		*tmp = NULL;

	if (!head || !(*head))
		return (-1);
	h = (*head);
	tmp = h;
	while (head && i < index)
	{
		tmp = h;
		h = h->next;
		i++;
	}
	if (i == index)
	{
		if (h->next || index == 0)
		{
			tmp->next = h->next;
			if (index == 0)
				(*head) = (*head)->next;
			h = NULL;
			free(h);
		}
		else
		{
			h = NULL;
			free(h);
		}
		return (1);
	}
	else
		return (-1);
}
