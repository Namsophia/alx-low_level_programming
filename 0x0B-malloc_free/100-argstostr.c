#include "main.h"
#include <stdlib.h>

/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int ch = 0, i = 0, r = 0, k = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		while (av[i][r])
		{
			ch++;
			r++;
		}
		r = 0;
		i++;
	}

	s = malloc((sizeof(char) * ch) + ac + 1);

	i = 0;
	while (av[i])
	{
		while(av[i][r])
		{
			s[k] = av[i][r];
			k++;
			r++;
		}
		s[k] = '\n';

		r = 0;
		k++;
		i++;
	}
	k++;
	s[k] = '\0';
	return (s);
}
