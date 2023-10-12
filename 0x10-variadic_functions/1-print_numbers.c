#include "variadic_functions.h"
#include <stdarg.h>

/**
*	print_numbers - it prints all the variadic inputs
*
*	@separator: char *
*
*	@n: const unsigned int
*
*	Return: void
**/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, tmp = 0;
	va_list		my_list;

	va_start(my_list, n);
	tmp = n;
	if (separator == NULL)
		return;
	while (i < tmp)
	{
		printf("%d", va_arg(my_list, int));
		i++;
		if (i != n)
			printf("%s", separator);
	}
	printf("\n");
}
