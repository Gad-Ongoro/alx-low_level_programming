#include <stdlib.h>
#include "main.h"

/**
 * argstostr - a function that concatenates all the arguments of your program
 *
 * @ac: int
 *
 * @av: pointer
 *
 * Return: SUCCESS
 *
 */

char *argstostr(int ac, char **av)
{
	int g1 = 0;
	int g2 = 0;
	int g3 = 0;
	int g4 = 0;
	char *g5;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (g1 = 0; g1 < ac; g1++)
	{
		for (g2 = 0; av[g1][g2]; g2++)
			g4++;
	}
	g4 += ac;

	g5 = malloc(sizeof(char) * g4 + 1);
	if (g5 == NULL)
		return (NULL);
	for (g1 = 0; g1 < ac; g1++)
	{
	for (g2 = 0; av[g1][g2]; g2++)
	{
		g5[g3] = av[g1][g2];
		g3++;
	}
	if (g5[g3] == '\0')
	{
		g5[g3++] = '\n';
	}
	}
	return (g5);
}
