#include "main.h"
#include <stdlib.h>

/**
*	reverse_array - reverse the array of int
*
*	@a: int *
*
*   @n: int
*
*	Return: void
**/


void reverse_array(int *a, int n)
{
	int *tmp = malloc(sizeof(int) * (n));
	int i = 0;

	if (a == NULL)
	{
		free(tmp);
		return;
	}
	while (i < n)
	{
		tmp[i] = a[i];
		i++;
	}
	i = 0;
	while (n >= 0)
		a[n--] = tmp[i++];
	free(tmp);
}
