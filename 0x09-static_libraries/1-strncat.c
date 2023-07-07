#include "main.h"

/**
 * _strncat - a function that concatenate two strings
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

char *_strncat(char *dest, char *src, int n)
{
	int myInt1, myInt2;

	myInt1 = 0;
	while (dest[myInt1] != '\0')
	{
		myInt1++;
	}
	myInt2 = 0;
	while (myInt2 < n && src[myInt2] != '\0')
	{
	dest[myInt1] = src[myInt2];
	myInt1++;
	myInt2++;
	}
	dest[myInt1] = '\0';
	return (dest);
}
