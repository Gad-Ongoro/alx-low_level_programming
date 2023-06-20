#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @g: the integer to extract the last digit from
 *
 * Return: value of the last digit
 */
int print_last_digit(int g)
{
	int q;

	if (g < 0)
	g = -g;

	q = g % 10;

	if (q < 0)
		q = -q;

	_putchar(q + '0');

	return (q);
}
