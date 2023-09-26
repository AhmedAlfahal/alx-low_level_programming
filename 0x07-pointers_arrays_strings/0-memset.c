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


char	*_memset(char *s, char b, unsigned int n)
{
	char			*ptr;
	unsigned int	i;

	ptr = s;
	i = 0;
	while (i < n)
	{
		ptr[i] = b;
		i++;
	}
	return (s);
}
