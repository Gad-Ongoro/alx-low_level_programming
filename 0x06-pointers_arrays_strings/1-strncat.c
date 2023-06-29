#include "main.h"

/**
 * _strncat - a function that concatenate two strings
 * _strncat function is similar to the _strcat function,
 * except that it will use at most n bytes from src
 *
 * @dest: input
 *
 * @src: input
 *
 * @n: input
 *
 * Return: dest
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int alx1;
	int alx2;

	alx1 = 0;
	while (dest[alx1] != '\0')
	{
		alx1++;
	}
	alx2 = 0;
	while (alx2 < n && src[alx2] != '\0')
	{
	dest[alx1] = src[alx2];
	alx1++;
	alx2++;
	}
	dest[alx1] = '\0';
	return (dest);
}
