#include "main.h"


/**
*	_is_all_digit - checks if it is all digit letters or not
*
*	@s: char *
*
*	Return: 0 if all are digit, 1 if they are not all digit.
*/

int	_is_all_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (!isdigit(s[i]))
			return (1);
		i++;
	}
	return (0);
}


/**
*	main - check the code for ALX School students.
*
*	@ac: int
*
*	@av: char **
*
*	Return: 0 if succes, 1 if it is wrong.
*/

int main(int ac, char **av)
{
	int i = 1;
	int res = 0;

	if (ac > 1)
	{
		while (i < ac)
		{
			if (_is_all_digit(av[i]))
			{
				printf("Error\n");
				return (1);
			}
			res = res + atoi(av[i++]);
		}
	}
	printf("%d\n", res);
	return (0);
}
