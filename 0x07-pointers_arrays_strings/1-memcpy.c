#include "main.h"

/**
 *_memcpy - a function that copies memory area.
 *
 *@dest: memory area to
 *
 *@src: memory area from
 *
 *@n: no. of bytes
 *
 *Return: a pointer to dest
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
