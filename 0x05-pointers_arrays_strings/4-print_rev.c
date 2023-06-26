#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 *
 * @s: str to reverse
 *
 * return: reverse
 */

void print_rev(char *s)
{
	int alx = 0;
	int ga;

	while (*s != '\0')
	{
	alx++;
	s++;
	}
	s--;
	for (ga = alx; ga > 0; ga--)
	{
	_putchar(*s);
	s--;
	}

	_putchar('\n');
}
