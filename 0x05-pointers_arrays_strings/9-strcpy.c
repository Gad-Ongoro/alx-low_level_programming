#include "main.h"

/**
 * char* _strcpy - function copies string pointed to by src, including(\0),
 * to the buffer pointed to by dest
 *
 * @dest: where to copy to
 *
 * @src: where to copy from
 *
 * Return: (dest)
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
	dest[l] = '\0';
	return (dest);
}
