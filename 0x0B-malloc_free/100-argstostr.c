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
	dup =  malloc(sizeof(char) * _strlen(str) + 2);
	if (dup == NULL)
		return (0);
	while (str[i])
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\n';
	dup[i + 1] = '\0';
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
		return (_strdup(""));
	dup = malloc((sizeof(char) * _strlen(s1))
			+ (sizeof(char) * _strlen(s2)) + 2);
	if (!dup)
		return (NULL);
	while (s1[i] != '\0')
	{
		dup[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
		dup[i++] = s2[j++];
	dup[i] = '\n';
	dup[i + 1] = '\0';
	return (free(s1), dup);
}

/**
*	argstostr - joing all the args
*
*	@ac: int
*
*	@av: char **
*
*	Return: pointer to the resulat
*
**/

char	*argstostr(int ac, char **av)
{
	int i = 0;
	char *new = NULL;

	if (!av || !*av)
		return (NULL);
	while (i < ac)
		new = str_concat(new, av[i++]);
	return (new);
}
