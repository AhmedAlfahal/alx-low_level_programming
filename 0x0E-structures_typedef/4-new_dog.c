#include "dog.h"
#include <strings.h>

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
*	new_dog - initilizing a dog
*
*	@name: char *
*
*	@age: float
*
*	@owner: char *
*
*  Return: return a pointer to the new dog
**/

dog_t	*new_dog(char *name, float age, char *owner)
{
	dog_t	*tmp;

	tmp = malloc(sizeof(dog_t) * 1);
	if (!tmp)
		return (free(tmp), NULL);
	tmp->name = _strdup(name);
	tmp->age = age;
	tmp->owner = _strdup(owner);
	return (tmp);
}
