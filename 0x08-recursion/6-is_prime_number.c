#include "main.h"

/**
* is_prime_helper - helps recs the master funciton
*
* @nb: int
*
* @tmp: int
*
* Return: 1 if prime, otherwise 0
**/
int	is_prime_helper(int nb, int tmp)
{
	if (tmp > nb / 2)
		return (1);
	if (nb % tmp == 0)
		return (0);
	return (is_prime_helper(nb, tmp + 1));
}

/**
*	is_prime_number - check if @n is prime or not
*
*	@n: int
*
*	Return: 1 prime 0 not
**/

int	is_prime_number(int n)
{
	if (n == 2)
		return (1);
	if (n % 2 == 0 || n <= 0 || n == 1)
		return (0);
	return (is_prime_helper(n, 2));
}
