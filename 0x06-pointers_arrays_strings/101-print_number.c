#include "main.h"

/**
 * print_number - a function that prints an integer
 *
 * @n: int
 *
 * Return: 0
 *
 */

void print_number(int n)
{
	unsigned int myNum = n;

	if (n < 0)
	{
		_putchar('-');
		myNum = -n;
	}

	if (myNum / 10 != 0)
	{
		print_number(myNum / 10);
	}
	_putchar((myNum % 10) + '0');
}
