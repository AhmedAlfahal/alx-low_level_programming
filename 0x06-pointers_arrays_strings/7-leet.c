#include "main.h"

/**
 *  leet - convert to int value
 *
 * @s: a string array
 *
 * Return: char *
 */

char *leet(char *s)
{
	int i = 0;
	int j = 0;
	char tmp1[] = "aAeEoOtTlL";
	char tmp2[] = "4433007711";

	while (s[i])
	{
		j = 0;
		while (j <= 9)
		{
			if (s[i] == tmp1[j])
				s[i] = tmp2[j];
			j++;
		}
		i++;
	}
	return (s);
}