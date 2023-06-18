#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 *
 * Return: 0
 *
 */
int main(void)
{
	char gad;

	for (gad = 'z'; gad >= 'a'; gad--)
	{
		putchar(gad);
	}
	putchar('\n');
	return (0);
}
