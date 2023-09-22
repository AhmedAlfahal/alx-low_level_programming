#include "main.h"

/**
*	_strcat - appends dest with src
*
*	@dest:  char *
*
*   @src:   char *
*
*	Return: a pointer to the resulting string
**/


char *_strcat(char *dest, char *src)
{
	int	i = 0;
	int	j = 0;

	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
