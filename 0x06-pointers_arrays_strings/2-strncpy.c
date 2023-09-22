#include "main.h"

/**
*	_strncpy - copy @src to @dst until @n
*
*	@dest:  char *
*
*   @src:   char *
*
*	@n:		int
*
*	Return: a pointer to the resulting string
**/


char *_strncpy(char *dest, char *src, int n)
{
	int	i = 0;

	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
