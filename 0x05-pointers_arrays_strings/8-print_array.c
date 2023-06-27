#include "main.h"

/**
 * print_array - a function that prints n elements of an array of integers,
 * followed by a new line
 *
 * @a: name of array
 *
 * @n: Number of elements of the array to be printed
 *
 * Return: a and  n
 */
void print_array(int *a, int n)
{
	int myInt;

	for (myInt = 0; myInt < (n - 1); myInt++)
	{
		printf("%d, ", a[myInt]);
	}
		if (myInt == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}
