#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 *
 * @s: memory adress
 *
 * @b: value
 *
 * @n: number of bytes to be changed
 *
 * Return: a pointer to the memory area s
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	int myInt = 0;

	for (; n > 0; myInt++)
	{
		s[myInt] = b;
		n--;
	}
	return (s);
}
