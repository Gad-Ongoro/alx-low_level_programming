#include "main.h"

/**
 * _strncpy - a function that copies a string
 *
 * @dest: input
 *
 * @src: input
 *
 * @n: input
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int alx2;

	alx2 = 0;
	while (alx2 < n && src[alx2] != '\0')
	{
		dest[alx2] = src[alx2];
		alx2++;
	}
	while (alx2 < n)
	{
		dest[alx2] = '\0';
		alx2++;
	}

	return (dest);
}
