#include "main.h"

/**
*	array_range - arrat from @min to @max
*
*	@min: int
*
*	@max: int
*
*	Return: the pointer of the malloced
**/


int *array_range(int min, int max)
{
	int tmp = max - min;
	int i = 0;
	int *new = NULL;

	if (min >= max)
		return (NULL);
	new = malloc(sizeof(int) * (tmp + 1));
	if (!new)
		return (NULL);
	while (i <= tmp)
		new[i++] = min++;
	return (new);
}
