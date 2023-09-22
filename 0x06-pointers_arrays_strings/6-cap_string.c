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

	if (!s)
		return (NULL);
	while (s[i])
	{
		if (s[i] == ' ' || s[i] == '	' || s[i] == '\n'
		|| s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!'
		|| s[i] == '?' || s[i] == '"' || s[i] == '(' ||  s[i] == ')'
		|| s[i] == '{' ||  s[i] == '}')
		{
			i++;
			continue;
		}
		else if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
			while (s[i] && ((s[i] >= 'A' && s[i] <= 'Z')
					|| (s[i] >= 'a' && s[i] <= 'z')))
				i++;
			continue;
		}
		else
		{
			while (s[i] && ((s[i] >= 'A' && s[i] <= 'Z')
					|| (s[i] >= 'a' && s[i] <= 'z')))
				i++;
		}
		i++;
	}
	return (s);
}
