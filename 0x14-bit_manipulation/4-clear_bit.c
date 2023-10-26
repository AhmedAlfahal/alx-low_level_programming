#include "main.h"

/**
*	clear_bit - it clears the bit at the index
*
*	@n: unsigned long int
*
*	@index: unsigned int
*
*	Return: 1 good -1 error
**/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int	try;

	if (!n || index >= (sizeof(unsigned long int) * 8))
		return (-1);
	try = 1;
	while (index > 0)
	{
		try = try << 1;
		index--;
	}
	*n = *n & (~try);
	return (1);
}
