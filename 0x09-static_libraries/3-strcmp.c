#include "main.h"

/**
 * _strcmp - a function that compares string values
 *
 * @s1: string
 *
 * @s2: string
 *
 * Return: Success
 */

int _strcmp(char *s1, char *s2)
{
	int myInt = 0;

	while (s1[myInt] != '\0' && s2[myInt] != '\0')
	{
		if (s1[myInt] != s2[myInt])
		{
			return (s1[myInt] - s2[myInt]);
		}
	myInt++;
	}
	return (0);
}
