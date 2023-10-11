#include "function_pointers.h"
#include <stddef.h>

/**
*	int_index - iterates @array using @cmp until it return non-zero
*
*	@array: int *
*
*	@size: size_t
*
*	@cmp: funcution pointer that takes int
*
*  Return: void
**/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int e = -1;

	if (!array || !cmp || size <= 0)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i++]) != 0)
		{
			e = i - 1;
			break;
		}
	}
	return (e);
}
