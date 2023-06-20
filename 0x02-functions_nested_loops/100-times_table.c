#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */
void print_times_table(int n)
{
	int num2, num3, num4;

	if (n >= 0 && n <= 15)
	{
		for (num2 = 0; num2 <= n; num2++)
		{
			for (num3 = 0; num3 <= n; num3++)
			{
				num4 = num3 * num3;
				if (num3 == 0)
				{
					_putchar(num4 + '0');
				} else if (num4 < 10 && num3 != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(num4 + '0');
				} else if (num4 >= 10 && num4 < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((num4 / 10) + '0');
					_putchar((num4 % 10) + '0');
				} else if (num4 >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((num4 / 100) + '0');
					_putchar(((num4 / 10) % 10) + '0');
					_putchar((num4 % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
