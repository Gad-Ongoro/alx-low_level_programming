#include "main.h"

/**
 * _memcpy - copies memory
 *
 * @dest: destinantion
 *
 * @src: source
 *
 * @n: number of bytes
 *
 * Return: Success
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int myInt1 = 0;
	int myInt2 = n;

	for (; myInt1 < myInt2; myInt1++)
	{
		dest[myInt1] = src[myInt1];
		n--;
	}
	return (dest);
}
