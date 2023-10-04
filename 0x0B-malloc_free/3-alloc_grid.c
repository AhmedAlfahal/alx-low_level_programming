#include "main.h"

/**
*	_memset - check the code
*
*	@s: string to set
*
*	@b: character to fill the memory with
*
*	@n: length to be copied
*
*	Return: starting of the string
*
**/

void	_memset(void *s, char b, unsigned int n)
{
	unsigned char	a;
	size_t			i;

	i = 0;
	a = (unsigned char)b;
	while (i < n)
	{
		((char *)s)[i] = a;
		i++;
	}
}

/**
*	alx_free - free 2d array
*
*	@tmp: int **
*
*	@size: int
*
*	Return: nothing
*
**/

void	alx_free(int **tmp, int size)
{
	for (int i = 0; i < size; i++)
		free(tmp[i]);
	free(tmp);
}

/**
*	alloc_grid - allocate grid
*
*	@width: int
*
*	@height: int
*
*	Return: the pointer to the string or NULL
*
**/

int	**alloc_grid(int width, int height)
{
	int **new = NULL;
	int i = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	new = malloc(sizeof(int *) * height);
	if (!new)
		return (NULL);
	while (i < height)
	{
		new[i] = malloc(sizeof(int) * width);
		if (!new[i])
			return (alx_free(new, i - 1),NULL);
		_memset(new[i], 0, width);
		i++;
	}
	return (new);
}
