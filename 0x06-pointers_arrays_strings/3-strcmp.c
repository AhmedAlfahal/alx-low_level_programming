#include "main.h"

/**
*	_strncpy - compare s1 and s2
*
*	@s1:  char *
*
*   @s2:   char *
*
*
*	Return: diffrence between both of them
**/


int _strcmp(char *s1, char *s2)
{
int	i = 0;

	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
