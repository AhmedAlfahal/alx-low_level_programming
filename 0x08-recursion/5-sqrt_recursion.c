#include "main.h"
#include <unistd.h>

/**
*	find_root - starts from 0 till finding the root
*
*	@n: int
*
*	@tmp: int
*
*	Return: the result
**/

int	find_root(int n, int tmp)
{
	if (tmp >= n)
		return (-1);
	if (tmp * tmp == n)
		return (tmp);
	else
		return (find_root(n, tmp + 1));
}

/**
*	_sqrt_recursion - calculate the sqrt of @n
*
*	@n: int
*
*	Return: the result
**/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (find_root(n, 1));
}
