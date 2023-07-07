#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 *
 * @dest: str
 *
 * @src: str
 *
 * Return: Success
 *
 */

char *_strcat(char *dest, char *src)
{
	int myInt1, myInt2;

	myInt1 = 0;
	while (dest[myInt1] != '\0')
	{
		myInt1++;
	}
	myInt2 = 0;
	while (src[myInt2] != '\0')
	{
		dest[myInt1] = src[myInt2];
		myInt1++;
		myInt2++;
	}

	dest[myInt1] = '\0';
	return (dest);
}
