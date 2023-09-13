#include "main.h"

/**
 *  _isalpha - check if its alphabet
 *	@c: char
 *	Return: retuen 1 if its alphabet else 0
 */

int	_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
