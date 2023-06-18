#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints the alphabet in lower case
 *
 * Return: Always 0
 *
 */
int main(void)
{
	int gad = 97;

	while (gad <= 122)
	{
		if (gad == 101 || gad == 113)
		{
			gad++;
			continue;
		}
		putchar(gad);
		gad++;
	}
	putchar('\n');
	return (0);
}
