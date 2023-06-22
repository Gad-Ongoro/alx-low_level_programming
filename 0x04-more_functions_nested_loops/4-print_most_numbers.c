#include "main.h"

/**
 * print_most_numbers - prints 0 to 9 except 4 and 2
 *
 * Return: void
 */

void print_most_numbers(void)
{
	char gad;

	for (gad = '0'; gad <= '9'; gad++)
	{
		if (!(gad == '2' || gad == '4'))
			_putchar(gad);
	}
	_putchar('\n');
}
