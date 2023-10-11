#include "function_pointers.h"
#include <stddef.h>

/**
*	array_iterator - iterates @array using @action @size'th times
*
*	@array: int *
*
*	@size: size_t
*
*	@action: funcution pointer that takes int
*
*  Return: void
**/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	static size_t i;

	if (!array || !action)
		return;
	else if (i == size - 1)
	{
		i = 0;
		return;
	}
	action(array[++i]);
	array_iterator(array, size, action);
}
