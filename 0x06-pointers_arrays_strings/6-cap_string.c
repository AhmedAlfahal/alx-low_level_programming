#include "main.h"
#include <stdlib.h>

/**
*	cap_string - capetlize string
*
*	@s: char *
*
*	Return: pointer to the result
**/


char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (i == 0)
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
		if ((s[i] >= 9 && s[i] <= 11) || s[i] == ' ' || s[i] == ';' || s[i] == ','
		|| s[i] == '.' || s[i] == '!' || s[i] == '?' || s[i] == '.'
		|| s[i] == '"' || s[i] == '{' || s[i] == '}' || s[i] == '(' || s[i] == ')')
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				s[i + 1] = s[i + 1] - 32;
		i++;
	}
	return (s);
}
