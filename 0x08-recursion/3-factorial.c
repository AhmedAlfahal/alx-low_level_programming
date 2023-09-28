#include "main.h"
#include <unistd.h>

/**
*	factorial - calculate the length of the word.
*
*	@n: int
*
*	Return: length value
**/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
