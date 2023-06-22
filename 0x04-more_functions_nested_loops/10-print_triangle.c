#include "main.h"
/**
 * print_triangle - prints a triangle followed by a new line
 *
 * @size: size of triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int num1, num2;

		for (num1 = 1; num1 <= size; num1++)
		{
			for (num2 = num1; num2 < size; num2++)
			{
				_putchar(' ');
			}

			for (num2 = 1; num2 <= num1; num2++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
