#include "main.h"

/**
*	main - check the code for ALX School students.
*
*	@ac: int
*
*	@av: char **
*
*	Return: Always 0.
*/

int	main(int ac, char **av)
{
	int	input;
	int	crnt_ch;
	int	change;
	int	i;
	int	cmp[] = {25, 10, 5, 2, 1, 0};

	if (ac != 2)
		return (printf("Error\n"), 1);
	change = 0;
	i = 0;
	input = atoi(av[1]);
	while (cmp[i])
	{
		crnt_ch = 0;
		if (cmp[i] > input)
		{
			i++;
			continue;
		}
		crnt_ch = input / cmp[i];
		change += crnt_ch;
		input = input - (cmp[i] * crnt_ch);
		i++;
	}
	printf("%d\n", change);
	return (0);
}
