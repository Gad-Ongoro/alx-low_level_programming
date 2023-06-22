#include "main.h"

/**
 * print_number - prints an integer.
 *
 * @n: integer to print
 *
 */
void print_number(int n)
{
	unsigned int gad;

	if (n < 0)
	{
		gad = -n;
		_putchar('-');
	} else
	{
		gad = n;
	}

	if (gad / 10)
	{
		print_number(gad / 10);
	}

	_putchar((gad % 10) + '0');
}
