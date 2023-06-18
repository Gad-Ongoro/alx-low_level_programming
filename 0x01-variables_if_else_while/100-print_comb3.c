#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits.
 *
 * Return: ALways 0
 *
 */
int main(void)
{
	int g, d;

	for (g = 48; g <= 56; g++)
	{
		for (d = 49; d <= 57; d++)
		{
			if (d > g)
			{
				putchar(g);
				putchar(d);
				if (g != 56 || d != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
