#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the
 * arguments of your program
 *  @ac: int input
 *  @av: double pointer array
 *  Return: 0 always
 */
char *argstostr(int ac, char **av)
{
	int q, r, n = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (q = 0; q < ac; q++)
	{
		for (r = 0; av[q][r]; r++)
			l++;
	}
	l += ac;
	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (q = 0; q < ac; q++)
	{
	for (r = 0; av[q][r]; r++)
	{
	str[n] = av[q][r];
	n++;
	}
		if (str[n] == '\0')
		{
			str[n++] = '\n';
		}
	}
	return (str);
}

