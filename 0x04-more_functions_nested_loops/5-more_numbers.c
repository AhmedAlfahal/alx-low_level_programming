#include "main.h"

/**
*	more_numbers - print from 0 to 14 ten times.
*
*	Return: void
**/

void more_numbers(void)
{
	int i = 0;
	int	j = 0;

	while (j < 10)
	{
		i = 0;
		while (i <= 14)
		{
			if ((i / 10) > 0)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			i++;
		}
		j++;
		_putchar('\n');
	}
}
