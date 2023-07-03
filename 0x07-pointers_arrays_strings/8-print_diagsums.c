#include "main.h"

#include <stdio.h>

/**
 * print_diagsums - prints sum of two diagonals of a square matrix of integers
 *
 * @a: int
 *
 * @size: int
 *
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int myInt1, myInt2 = 0;
	int myInt3;

	for (myInt3 = 0; myInt3 < size; myInt3++)
	{
		myInt1 = myInt1 + a[myInt3 * size + myInt3];
	}

	for (myInt3 = size - 1; myInt3 >= 0; myInt3--)
	{
		myInt2 += a[myInt3 * size + (size - myInt3 - 1)];
	}

	printf("%d, %d\n", myInt1, myInt2);
}
