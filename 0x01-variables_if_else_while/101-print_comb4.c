#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits.
 *
 * Return: Always 0
 */
int main(void)
{
	int g, a, d;

	for (g = 48; g < 58; g++)
	{
		for (a = 49; a < 58; a++)
		{
			for (d = 50; d < 58; d++)
			{
				if (d > a && a > g)
				{
					putchar(g);
					putchar(a);
					putchar(d);
					if (g != 55 || a != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
