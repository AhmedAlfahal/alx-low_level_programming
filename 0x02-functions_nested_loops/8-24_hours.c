#include "main.h"

/**
 *  jack_bauer - print the time each minute
 *	Return: void
 */

void jack_bauer(void)
{
	int	i = 0;
	int	j = 0;

	while (j <= 24)
	{
		if (j <= 9)
		{
			_putchar(48);
			_putchar(j + 48);
			_putchar(':');
		}
		else if (j > 9)
		{
			_putchar(':');
			_putchar((j / 10) + 48);
			_putchar((j % 10) + 48);
		}
		if (i <= 9)
		{
			_putchar(48);
			_putchar(i + 48);
		}
		else if (i > 9)
		{
			_putchar((i / 10) + 48);
			_putchar((i % 10) + 48);
		}
		_putchar('\n');
		sleep(60);
		i++;
		if (i == 60)
		{
			i = 0;
			j++;
		}
	}
}
