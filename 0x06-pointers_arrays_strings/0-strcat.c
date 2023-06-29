#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 *
 * @dest: input
 *
 * @src: input
 *
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int alx1;
	int alx2;

	alx1 = 0;
	while (dest[alx1] != '\0')
	{
		alx1++;
	}
	alx2 = 0;
	while (src[alx2] != '\0')
	{
		dest[alx1] = src[alx2];
		alx1++;
		alx2++;
	}

	dest[alx1] = '\0';
	return (dest);
}
