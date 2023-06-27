#include "main.h"

/**
 * print_rev - PRINTS str in REVERSE
 *
 * @s: str to be REVERSED
 *
 * Return: REVERSE
 *
 */

void print_rev(char *s)
{
	int alx = 0;
	int g;

	while (*s != '\0')
	{
		alx++;
		s++;
	}
	s--;
	for (g = alx; g > 0; g--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
