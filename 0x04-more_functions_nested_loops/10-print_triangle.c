#include "main.h"

/**
*	print_triangle - draw triangle with a size of (@size * @size)
*
*	@size: int
*
*	Return: void
**/

void	print_triangle(int size)
{
	int i = 0;
	int	j = 0;

	if (size <= 0)
		_putchar('\n');
	while (j < size)
	{
		i = 0;
		while (i < size)
		{
			if (i < size - j - 1)
				_putchar(' ');
			else
				_putchar('#');
			i++;
		}
		_putchar('\n');
		j++;
	}
}
