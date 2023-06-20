#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char a_z10x;
	int gad;

	gad = 0;

	while (gad < 10)
	{
		a_z10x = 'a';
		while (a_z10x <= 'z')
		{
			_putchar(a_z10x);
			a_z10x++;
		}
		_putchar('\n');
		gad++;
	}
}
