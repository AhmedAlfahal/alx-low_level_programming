#include "main.h"

/**
*	print_diagonal - draw a @n diagonal
*
*	@n: int
*
*	Return: void
**/

void print_diagonal(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar(' ');
		if (i == n - 1)
			_putchar('\\');
		i++;
	}
	_putchar('\n');
}
