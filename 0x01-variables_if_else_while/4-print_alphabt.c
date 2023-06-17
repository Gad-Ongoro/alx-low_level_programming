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
	int char lw, e, q;

	e = 'e';
	q = 'q';

	for (lw = 'a'; lw <= 'z'; lw++)
	{
	if (lw != e && lw != q)
	putchar(lw);
	}
	putchar('\n');
	return (0);
}
