#include <stdlib.h>

#include "main.h"

/**
 * str_concat - a function that concatenates two strings
 *
 * @s1: char1
 *
 * @s2: char2
 *
 * Return: char1 + char2
 *
 */

char *str_concat(char *s1, char *s2)
{
	char *myChar;
	int myInt1, myInt2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	myInt1 = myInt2 = 0;
	while (s1[myInt1] != '\0')
		myInt1++;
	while (s2[myInt2] != '\0')
		myInt2++;
	myChar = malloc(sizeof(char) * (myInt1 + myInt2 + 1));

	if (myChar == NULL)
		return (NULL);
	myInt1 = myInt2 = 0;
	while (s1[myInt1] != '\0')
	{
		myChar[myInt1] = s1[myInt1];
		myInt1++;
	}

	while (s2[myInt2] != '\0')
	{
		myChar[myInt1] = s2[myChar2];
		myInt1++, myChar2++;
	}
	myChar[myInt1] = '\0';
	return (myChar);
}
