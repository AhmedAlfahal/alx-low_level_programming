#include "main.h"

/**
*  times_table - print the  time table
*	Return: void
**/

void times_table(void)
{
	int	i = 0;
	int	j = 0;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			if (i * j <= 9 && j < 9)
			{
				_putchar((j * i) + 48);
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if (j * i > 9 && j < 9)
			{
				_putchar(((j * i) / 10) + 48);
				_putchar(((j * i) % 10) + 48);
				_putchar(',');
				_putchar(' ');
			}
			else if (i * j <= 9 && j == 9)
			{
				_putchar((j * i) + 48);
			}
			else if (j * i > 9 && j == 9)
			{
				_putchar(((j * i) / 10) + 48);
				_putchar(((j * i) % 10) + 48);
			}
			j++;
		}
		_putchar('\n');
		i++;
	}

}
