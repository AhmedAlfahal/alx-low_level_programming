#include "variadic_functions.h"
#include <stdarg.h>

/**
*	print_all - it prints all the pased on its format inputs.
*
*	@format: char *
*
*	Return: void
**/

void	print_all(const char * const format, ...)
{
	va_list			mylist;
	char			*tmp;
	char			nu[] = "(nil)";
	int				n, i, j;

	n = 0;
	i = -1;
	j = 0;
	while (format && format[n])
		n++;
	va_start(mylist, format);
	while (++i < n)
	{
		if (j)
			printf(", ");
		j = 1;
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(mylist, int));
			break;
		case 'i':
			printf("%d", va_arg(mylist, int));
			break;
		case 'f':
			printf("%f", va_arg(mylist, double));
			break;
		case 's':
			tmp = va_arg(mylist, char *);
			if (!tmp)
				tmp = nu;
			printf("%s", tmp);
			break;
		default:
			j = 0;
			break;
		}
	}
	printf("\n");
	va_end(mylist);
}
