#include "main.h"

/**
*	malloc_checked - mallocs an @b bytes
*
*	@b: unsigned int
*
*	Return: the pointer of the malloced or exits with 98 if fails
**/



void *malloc_checked(unsigned int b)
{
	char *s = malloc(b);

	if (!s)
		exit(98);
	return (s);
}
