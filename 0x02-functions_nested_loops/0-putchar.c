#include "main.h"
/**
 *  main -Entry point
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	char *str = "_putchar";

	while (str[i])
		_putchar(str[i++]);
	_putchar('\n');
	return (0);
}
