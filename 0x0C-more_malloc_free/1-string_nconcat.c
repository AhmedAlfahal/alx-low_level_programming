#include "main.h"

/**
 * _strlen - fins length of string
 * @s: a pointer to string
 * Return: string length
 */
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
*	string_nconcat - concats @s1 with an @b bytes of @s2
*
*	@s1: char *
*
*	@s2: char *
*
*	@n: unsinged int
*
*	Return: the pointer of the result
**/



char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char			*new;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (s1)
		i = _strlen(s1);
	if (s2)
		j = _strlen(s2);
	if (n >= j)
		n = j;
	new = malloc(sizeof(char) * (i + n + 1));
	if (!new)
		return (NULL);
	i = -1;
	j = -1;
	if (s1)
		while (s1[++i])
			new[i] = s1[i];
	if (!s1)
		i = 0;
	if (s2)
		while (s2[++j] && j < n)
			new[i++] = s2[j];
	new[i] = '\0';
	return (new);
}
