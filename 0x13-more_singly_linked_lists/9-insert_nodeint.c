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
	listint_t	*new_node;
	listint_t	*tmp;
	unsigned int	i;

	if (!head)
		return (NULL);
	if (!(*head) && idx > 0)
		return (NULL);
	tmp = *head;
	i = 0;
	while (tmp && ++i < idx)
		tmp = tmp->next;
	if (i < idx)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = tmp->next;
	tmp->next = new_node;
	return (new_node);
}
