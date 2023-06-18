#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0
 *
 */
int main(void)
{
	int gad;

	for (gad = 48; gad < 58; gad++)
	{
		putchar(gad);
	}
	putchar('\n');
	return (0);
}
