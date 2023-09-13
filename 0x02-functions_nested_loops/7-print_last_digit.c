#include "main.h"

/**
 *  print_last_digit - print the last digit
 *	@n: int
 *	Return: return the last digit
 */

int		print_last_digit(int n)
{
	if (n > 0)
	{
		_putchar((n % 10) + 48);
	}
	else
	{
		if (n == -2147483648)
		{
			_putchar((8) + 48);
			return (8);
		}
		else
		{
			n *= -1;
			_putchar((n % 10) + 48);
		}
	}
	return (n % 10);
}
