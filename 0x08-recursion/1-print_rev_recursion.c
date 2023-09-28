#include "main.h"
#include <unistd.h>

/**
*	_print_rev_recursion - writes the string reversed.
*
*	@s: char *
*
*	Return: void
**/

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		write(1, s, 1);
	}
}
