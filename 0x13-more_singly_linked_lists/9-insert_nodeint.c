#include "lists.h"

/**
*	insert_nodeint_at_index - insert the node at @idx'th index
*
*	@head: listint_t **
*
*	@idx: unsigned int
*
*	@n: int
*
*	Return: the node at the index
**/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int	i = 0;
	listint_t		*h = NULL;
	listint_t		*tmp = NULL;

	if (!head || !(*head))
		return (NULL);
	h = (*head);
	while (head && i < idx - 1)
	{
		h = h->next;
		i++;
	}
	if (i == idx - 1 || (i == 0 && idx == 0))
	{
		if (h->next)
		{
			tmp = h->next;
			h->next = malloc(sizeof(listint_t));
			h->next->n = n;
			h->next->next = tmp;
		}
		else
		{
			h->next = malloc(sizeof(listint_t));
			h->next->n = n;
			h->next->next = NULL;

		}
		return (h->next);
	}
	else
		return (NULL);
}
