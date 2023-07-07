#include "main.h"

/**
 * char *_strcpy - function that copies str pointed to by src
 *
 * @dest: destination
 *
 * @src: source
 *
 * Return: SUCCESS
 *
 */

char *_strcpy(char *dest, char *src)
{
	int myInt1 = 0;
	int myInt2 = 0;

	while (*(src + myInt1) != '\0')
	{
		myInt1++;
	}
	for ( ; myInt2 < myInt1 ; myInt2++)
	{
		dest[myInt2] = src[myInt2];
	}
	dest[myInt1] = '\0';
	return (dest);
}
