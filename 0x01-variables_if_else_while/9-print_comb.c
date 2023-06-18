#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: Always 0
 *
 */
int main(void)
{
	int gad;

	for (gad = 48; gad <= 57; gad++)
	{
		putchar(gad);
		if (gad != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
