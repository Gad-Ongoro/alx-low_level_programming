#include "main.h"

/**
 * print_binary - a function that prints binary equivalent of a decimal number
 *
 * @n: number
 *
 */

void print_binary(unsigned long int n)
{
	int myInt1, cnt = 0;
	unsigned long int cur;

	for (myInt1 = 63; myInt1 >= 0; myInt1--)
	{
		cur = n >> myInt1;

		if (cur & 1)
		{
			_putchar('1');
			cnt++;
		}
		else if (cnt)
			_putchar('0');
	}
	if (!cnt)
		_putchar('0');
}
