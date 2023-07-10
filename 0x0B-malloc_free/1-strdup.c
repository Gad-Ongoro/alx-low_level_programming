#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: str
 *
 * Return: SUCCESS
 *
 */

char *_strdup(char *str)
{
	char *myChar;
	int myInt1 = 0;
	int myInt2 = 0;

	if (str == NULL)
		return (NULL);
	myInt1 = 0;
	while (str[myInt1] != '\0')
		myInt1++;

	myChar = malloc(sizeof(char) * (myInt1 + 1));

	if (myChar == NULL)
		return (NULL);

	for (myInt2 = 0; str[myInt2]; myInt2++)
		myChar[myInt2] = str[myInt2];

	return (myChar);
}
