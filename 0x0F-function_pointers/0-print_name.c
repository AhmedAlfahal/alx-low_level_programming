#include "function_pointers.h"

/**
*	print_name - prints @name using funcution giving as pointer
*
*	@name: char *
*
*	@f: funcution pointer that takes char *
*
*  Return: void
**/

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
