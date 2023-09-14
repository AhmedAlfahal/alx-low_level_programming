#include "main.h"

/**
*	print_diagonal - draw a @n diagonal
*
*	@n: int
*
*	Return: void
**/

void	print_square(int size)
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
			_putchar('#');
			i++;
		}
		_putchar('\n');
		j++;
	}
}
