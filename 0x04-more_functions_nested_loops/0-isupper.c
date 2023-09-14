#include "main.h"

/**
*	_isupper - check if the char is upper case
*
*	@c: int
*
*	Return: 1 if it is upper case, or 0 if not.
**/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
