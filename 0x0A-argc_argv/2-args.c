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
	int i = 0;

	while (i < ac)
		printf("%s\n", av[i++]);
	return (0);
}
