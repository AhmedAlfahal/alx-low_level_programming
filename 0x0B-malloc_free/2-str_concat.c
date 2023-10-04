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
	if (!str)
		return (NULL);
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

/**
*	str_concat - joining s1 + s2
*
*	@s1: char *
*
*	@s2: char *
*
*	Return: the pointer to the string or NULL
*
**/

char	*str_concat(char *s1, char *s2)
{
	char	*dup;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s1 && !s2)
		return (_strdup(s1));
	if (!s1 && s2)
		return (_strdup(s2));
	if (!s1 && !s2)
		return (NULL);
	dup = (char *) malloc(sizeof(char) * _strlen(s1)
			+ sizeof(char) * _strlen(s2) + 1);
	if (!dup)
		return (NULL);
	while (s1[i] != '\0')
	{
		dup[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
		dup[i++] = s2[j++];
	dup[i] = '\0';
	return (dup);
}
