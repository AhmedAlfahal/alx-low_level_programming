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
	int	j = 1;

	if (n <= 0)
		_putchar('\n');
	while (j <= n)
	{
		i = 0;
		while (i < j)
		{
			if (i < j - 1)
				_putchar(' ');
			else if (i == j - 1)
				_putchar('\\');
			i++;
		}
		_putchar('\n');
		j++;
	}
}
