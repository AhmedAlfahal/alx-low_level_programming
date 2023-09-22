#include "main.h"
#include <stdlib.h>

/**
*	string_toupper - make all the charactar in uppercase
*
*	@s: char *
*
*	Return: pointer to the result
**/


char *string_toupper(char *s)
{
	int i = 0;

	if (!s)
		return (NULL);
	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
