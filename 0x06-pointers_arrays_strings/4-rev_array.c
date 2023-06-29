#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers
 *
 * @a: array
 *
 * @n: elements of array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int alx1;
	int alx2;

	for (alx1 = 0; alx1 < n--; alx1++)
	{
		alx2 = a[alx1];
		a[alx1] = a[n];
		a[n] = alx2;
	}
}
