#include "main.h"

/**
*	binary_to_uint - prints binary to unisgned int
*
*	@b: const char *
*
*	Return: the result
**/

unsigned int binary_to_uint(const char *b)
{
	int				n;
	unsigned int	res;
	unsigned int	bin;

	n = 0;
	res = 0;
	bin = 1;
	if (!b || !b[0])
		return (0);
	while (b[n])
		n++;
	while (--n >= 0)
	{
		if (b[n] < '0' || b[n] > '1')
			return (0);
		res += bin * (b[n] - '0');
		bin *= 2;
	}
	return (res);
}
