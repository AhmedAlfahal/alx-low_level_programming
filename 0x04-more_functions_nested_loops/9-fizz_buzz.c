#include "main.h"

/**
*	fizz_buzz - print numebr from 1 - 100 with fizzbuzz
*
*	Return: void
*
**/

void	fizz_buzz(void)
{
	int	i = 0;
	
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i < 100)
			printf(" ");
		i++;
	}
}
