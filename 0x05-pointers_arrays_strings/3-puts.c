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
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
		_putchar('\n');
}
