#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 */
void jack_bauer(void)
{
	int g, d;

	g = 0;

	while (g < 24)
	{
		d = 0;
		while (d < 60)
		{
			_putchar((g / 10) + '0');
			_putchar((g % 10) + '0');
			_putchar(':');
			_putchar((d / 10) + '0');
			_putchar((d % 10) + '0');
			_putchar('\n');
			d++;
		}
		g++;
	}
}

