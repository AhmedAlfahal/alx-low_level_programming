#include "lists.h"
#include <stddef.h>
#include <strings.h>

/**
*	_strlen - fins length of string
*
*	@s: a pointer to string
*
*	Return: string length
**/

int	_strlen(const char *s)
{
	int	l;

	if (!s)
		return (0);
	l = 0;
	while (s[l] != 0)
		l++;
	return (l);
}

/**
*	add_node - adds a node the list
*
*	@head: list_t
*
*	@str: char *
*
*	Return: total number of nodes
**/

list_t *add_node(list_t **head, const char *str)
{
	list_t	*tmp = malloc(sizeof(list_t) * 1);

	if (!tmp)
		return (NULL);
	bzero(tmp, sizeof(list_t) * 1);
	tmp->len = _strlen(str);
	tmp->str = strdup(str);
	if (!head)
		return (tmp);
	tmp->next = (*head);
	(*head) = tmp;
	return (tmp);
}
