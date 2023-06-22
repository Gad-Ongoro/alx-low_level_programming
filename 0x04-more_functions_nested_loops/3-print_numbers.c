#include "main.h"

/**
 * print_numbers - a function that prints the numbers, from 0 to 9
 *
 * Return: 0 - 9
 */

void print_numbers(void)
{
	char gad;

	for (gad = '0'; gad <= '9'; gad++)
	{
		_putchar(gad);
	}
	_putchar('\n');
}
