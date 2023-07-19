#include "function_pointers.h"

#include <stdio.h>

/**
 * array_iterator - executes a function as a param on each element of array
 *
 * @array: array
 *
 * @size: size
 *
 * @action: pointer
 * Return: SUCCESS
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int myInt;

if (array == NULL || action == NULL)
	return;

for (myInt = 0; myInt < size; myInt++)
{
	action(array[myInt]);
}
}
