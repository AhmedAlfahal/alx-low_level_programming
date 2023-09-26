#include "main.h"

/**
*	_memset - setting memory @s with @n'th @b
*
*	@s:     char *
*
*   @b:     char
*
*	@n:     unsigned int
*
*	Return: a pointer to the resulting string
**/


char *_memset(char *s, char b, unsigned int n)
{
	size_t i = 0;
	char    *new = NULL;

	while (i < n)
	{
		new[i] = b;
		i++;
	}
	return (b);
}
