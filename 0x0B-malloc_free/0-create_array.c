#include "main.h"

/**
*	create_array - allocates size bytes of char
*
*	@size: unsigned int
*
*	@c: char
*
*	Return: the pointer to the allocated or NULL
*
**/

char	*create_array(unsigned int size, char c)
{
	unsigned int	i = 0;
	char *new = NULL;

	if (size <= 0)
		return (NULL);
	new = malloc(sizeof(char) * size);
	if (!new)
		return (NULL);
	while (i < size)
		new[i++] = c;
	return (new);
}
