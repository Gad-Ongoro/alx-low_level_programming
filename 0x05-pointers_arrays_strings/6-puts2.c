#include "main.h"

/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 *
 * @str: string to print
 *
 * Return: str
 */

void puts2(char *str)
{
	int alx = 0;
	int alx2 = 0;
	char *alx3 = str;
	int alx4;

	while (*alx3 != '\0')
	{
		alx3++;
		alx++;
	}
	alx2 = alx - 1;
	for (alx4 = 0 ; alx4 <= alx2 ; alx4++)
	{
		if (alx4 % 2 == 0)
	{
		_putchar(str[alx4]);
	}
	}
	_putchar('\n');
}
