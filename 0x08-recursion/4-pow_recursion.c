#include "main.h"
#include <unistd.h>

/**
*	_pow_recursion - calculate the pwer of @x to @y
*
*	@x: int
*
*	@y: int
*
*	Return: power value
**/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
