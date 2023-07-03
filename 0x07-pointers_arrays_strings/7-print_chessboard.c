#include "main.h"

/**
 * print_chessboard - a function that prints the chessboard.
 *
 * @a: array
 *
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
	int myInt1;
	int myInt2;

	for (myInt1 = 0; myInt1 < 8; myInt1++)
	{
		for (myInt2 = 0; myInt2 < 8; myInt2++)
			_putchar(a[myInt1][myInt2]);
		_putchar('\n');
	}
}
