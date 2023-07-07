#include "main.h"

/**
 * _memset - func
 *
 * @s: str
 *
 * @b: char
 *
 * @n: int
 *
 * Return: SUCCESS
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
