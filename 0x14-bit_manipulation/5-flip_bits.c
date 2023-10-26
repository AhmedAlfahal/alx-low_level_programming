#include "main.h"

/**
*	flip_bits - it clears the bit at the index
*
*	@n: unsigned long int
*
*	@m: unsigned long int
*
*	Return: 1 good -1 error
**/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int		i = 0;
	unsigned long int	flip = n ^ m;

	while (flip)
	{
		i += flip & 1;
		flip >>= 1;
	}
	return (i);
}
