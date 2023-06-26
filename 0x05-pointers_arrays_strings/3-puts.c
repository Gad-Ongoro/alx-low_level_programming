#include "main.h"

/**
 * _puts - prints a str followed by \n to standard output
 *
 * @str: str to be printed
 *
 * Return: sol
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
