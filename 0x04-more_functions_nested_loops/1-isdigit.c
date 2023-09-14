#include "main.h"

/**
*	_isdigit - check if the char is digit
*
*	@c: int
*
*	Return: 1 if it is digit, or 0 if not.
**/

int _isdigit(int c)
{
	if (c >= '0' && c <= '1')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
