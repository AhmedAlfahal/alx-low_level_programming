#include "main.h"
#include <unistd.h>

/**
*	_strlen_recursion - calculate the length of the word.
*
*	@s: char *
*
*	Return: length value
**/

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
