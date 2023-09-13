#include "main.h"

/**
 *  _islower - check if its lowercase
 *	@c: char
 *	Return: retuen 1 if its lowercase else 0
 */

int	_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
