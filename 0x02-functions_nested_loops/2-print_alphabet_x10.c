#include "main.h"

/**
 *  print_alphabet_x10 - prints lower alphabet 10 times
 *
 */

void print_alphabet_x10(void)
{
	int	i = 0;
	char	a = 'a';

	while (i < 10)
	{
		a = 'a';

		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		i++;
	}
}
