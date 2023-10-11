#include "3-calc.h"

/**
*	main - prints the result of the operation
*
*	@ac: number of arguments
*
*	@av: arguments
*
*	Return: 0 when success 98 when something is wrong.
**/

int main(int ac, char **av)
{
	int (*f)(int, int) = NULL;

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	f = get_op_func(av[2]);
	printf("%d\n", f(atoi(av[1]), atoi(av[3])));
	return (0);
}
