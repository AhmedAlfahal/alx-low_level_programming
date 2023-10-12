#include "variadic_functions.h"
#include <stdarg.h>

/**
*	print_strings - it prints all the variadic inputs
*
*	@separator: char *
*
*	@n: const unsigned int
*
*	Return: void
**/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	unsigned int tmp = 0;
	va_list		my_list;
	char		*s;

	va_start(my_list, n);
	tmp = n;
	while (i < tmp)
	{
		s = va_arg(my_list, char *);
		if (s)
			printf("%s", s);
		else
			printf("(nil)");
		i++;
		if (i != n && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
