#include "main.h"
#include <unistd.h>

/**
*	_puts_recursion - writes the string.
*
*	@s: char *
*
*	Return: void
**/

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		write(1, s, 1);
		_puts_recursion(++s);
	}
	else
		write(1, "\n", 1);
}
