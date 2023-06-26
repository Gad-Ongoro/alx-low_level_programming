#include "main.h"

/**
 * _puts - prints a str followed by \n to standard output
 *
 * @str: str to be printed
 *
 * Return: str and \n
 */
void _puts(char *str)
{
	int alx;

	alx = 0;

	while (str[alx])
	{
		_putchar(str[alx]);
		alx++;
	}
		_putchar('\n');
}
