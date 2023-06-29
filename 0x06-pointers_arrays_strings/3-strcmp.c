#include "main.h"

/**
 * _strcmp - a function that compares two strings
 *
 * @s1: input
 *
 * @s2: input
 *
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int alx;

	alx = 0;
	while (s1[alx] != '\0' && s2[alx] != '\0')
	{
		if (s1[alx] != s2[alx])
		{
			return (s1[alx] - s2[alx]);
		}
		alx++;
	}
	return (0);
}
