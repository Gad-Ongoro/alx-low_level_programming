#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 *
 * @s: str
 *
 * Return: SUCCESS
 *
 */

int _strlen(char *s)
{
	int myInt = 0;

	while (*s != '\0')
	{
		myInt++;
		s++;
	}

	return (myInt);
}
