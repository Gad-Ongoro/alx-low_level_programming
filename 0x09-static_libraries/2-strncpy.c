#include "main.h"

/**
 * _strncpy - a function that copies a string
 *
 * @dest: str
 *
 * @src: str
 *
 * @n: int
 *
 * Return: SUCCESS
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int myInt;

	myInt = 0;
	while (myInt < n && src[myInt] != '\0')
	{
		dest[myInt] = src[myInt];
		myInt++;
	}
	while (myInt < n)
	{
		dest[myInt] = '\0';
		myInt++;
	}

	return (dest);
}
