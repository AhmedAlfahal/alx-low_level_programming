#include "main.h"

/**
*	get_bit - it gets the bit at the index
*
*	@n: unsigned long int
*
*	@index: unsigned int
*
*	Return: the bit at the index
**/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	while (index > 0 && n)
	{
		n = n >> 1;
		index--;
	}
	return (n & 1);
}
