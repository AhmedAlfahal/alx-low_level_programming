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

int main(int ac, char **av)
{
	if (ac == 3)
		printf("%d\n", atoi(av[1]) * atoi(av[2]));
	else
		printf("Error\n");
	return (0);
}
