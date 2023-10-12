#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
*	sum_them_all - it sums all the variadic inputs
*
*	@n: const unsigned int
*
*	Return: the result of the sum
**/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum, i = 0;
	va_list mylist;

	if (n == 0)
		return (0);
	va_start(mylist, n);
	sum = 0;
	while (i < n)
	{
		sum += va_arg(mylist, unsigned int);
		i++;
	}
	va_end(mylist);
	return (sum);
}
