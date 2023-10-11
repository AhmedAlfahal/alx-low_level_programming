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
	size_t i = 0;

	if (!array || !action)
		return;
	while (i < size)
		action(array[i++]);
}
