#include "lists.h"

/**
*	get_nodeint_at_index - get the node at @index'th
*
*	@head: listint_t *
*
*	@index: unsigned int
*
*	Return: the element that was removed
**/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int	i = 0;

	if (!head)
		return (NULL);
	while (i < index && head)
	{
		head = head->next;
		i++;
	}
	if (i == index)
		return (head);
	else
		return (NULL);
}
