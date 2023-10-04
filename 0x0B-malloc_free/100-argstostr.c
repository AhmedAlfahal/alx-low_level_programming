#include "main.h"

/**
*	argstostr - joing all the args
*
*	@ac: int
*
*	@av: char **
*
*	Return: pointer to the resulat
*
**/

char	*argstostr(int ac, char **av)
{
	char	*new;
	int		i;
	int		n;
	int		t_n;

	if (!av || ac < 1)
		return (NULL);
	i = -1;
	t_n = 0;
	while (++i < ac)
	{
		n = -1;
		while (av[i][++n])
			t_n++;
	}
	new = malloc(sizeof(char) * (t_n + ac + 1));
	if (!new)
		return (NULL);
	i = -1;
	t_n = -1;
	while (++i < ac)
	{
		n = -1;
		while (av[i][++n])
			new[++t_n] = av[i][n];
		new[++t_n] = '\n';
	}
	new[++t_n] = 0;
	return (new);
}
