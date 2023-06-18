#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: Always (0)
 */
int main(void)
{
	int gad;

	for (gad = 48; gad < 58; gad++)
	{
		putchar(gad);
	}
	for (gad = 97; gad < 103; gad++)
	{
		putchar(gad);
	}
	putchar('\n');
	return (0);
}
