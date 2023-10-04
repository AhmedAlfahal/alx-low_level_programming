#include "main.h"

/**
*	_strlen - fins length of string
*	
*	@s: a pointer to string
*	
*	Return: string length
**/
int	_strlen(char *s)
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
*	_strdup - duplicate a string
*
*	@str: char *
*
*	Return: the pointer to the string or NULL
*
**/

char	*_strdup(char *str)
{
	char	*dup;
	int		i;

	i = 0;
	dup = (char *) malloc(sizeof(char) * _strlen(str) + 1);
	if (dup == NULL)
		return (0);
	while (str[i])
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
