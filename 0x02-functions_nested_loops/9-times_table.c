#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: 0
 */
void times_table(void)
{
	int g, d, a;

	for (g = 0; g < 10; g++)
	{
		for (d = 0; d < 10; d++)
		{
			a = d * g;
			if (d == 0)
			{
				_putchar(a + '0');
			}

			if (a < 10 && d != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(a + '0');
			} else if (a >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((a / 10) + '0');
				_putchar((a % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
