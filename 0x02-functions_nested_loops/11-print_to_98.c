#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from num1 to 98
 *
 * @num1: printed from
 */
void print_to_98(int num1)
{
	int num2, num3;

	if (num1 <= 98)
	{
		for (num2 = num1; num2 <= 98; num2++)
		{
			if (num2 != 98)
				printf("%d, ", num2);
			else if (num2 == 98)
				printf("%d\n", num2);
		}
	} else if (num1 >= 98)
	{
		for (num3 = num1; num3 >= 98; num3--)
		{
			if (num3 != 98)
				printf("%d, ", num3);
			else if (num3 == 98)
				printf("%d\n", num3);
		}
	}
}
