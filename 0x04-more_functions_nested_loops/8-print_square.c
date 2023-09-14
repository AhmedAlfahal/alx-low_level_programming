#include "main.h"

/**
*	print_square - draw '#' with a size of (@size * @size)
*
*	@size: int
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
