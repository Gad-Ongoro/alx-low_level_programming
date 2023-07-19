#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 *
 * @array: Array
 *
 * @size: size
 *
 * @cmp: pointer
 *
 * Return: SUCCESS
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int myInt;

if (array == NULL || size <= 0 || cmp == NULL)
	return (-1);

for (myInt = 0; myInt < size; myInt++)
{
	if (cmp(array[myInt]))
		return (myInt);
}
return (-1);
}
