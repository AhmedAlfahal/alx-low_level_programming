#include "main.h"

/**
*	print_to_98 - prints number upto 98 from @n
*	@n: int
*	Return:  void
**/

void print_to_98(int n)
{
	int	tmp = 0;
	while (n < 99)
	{
		if (n < 0)
		{
			_putchar('-');
			tmp = n * -1;
		}
		else
		{
			tmp = n;
		}
		if (tmp <= 9)
		{
			_putchar(tmp + 48);
			_putchar(',');
			_putchar(' ');
		}
		else if (tmp == 98 && n > 0)
		{
			_putchar((tmp / 10) + 48);
			_putchar((tmp % 10) + 48);
		}
		else if (tmp > 9)
		{
			_putchar((tmp / 10) + 48);
			_putchar((tmp % 10) + 48);
			_putchar(',');
			_putchar(' ');
		}
		n++;
	}
	_putchar('\n');
}
