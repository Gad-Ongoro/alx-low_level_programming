#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 *
 * @n: number of times the character \ should be printed.
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int num1, num2;

		for (num1 = 0; num1 < n; num1++)
		{
			for (num2 = 0; num2 < n; num2++)
			{
				if (num2 == num1)
					_putchar('\\');
				else if (num2 < num1)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
