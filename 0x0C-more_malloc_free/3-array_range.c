#include "main.h"
#include <stdlib.h>

/**
 * *array_range -  a function that creates an array of integers
 *
 * @min: minimum range of stored values
 *
 * @max: maximum range of stored values
 *
 * Return: SUCCESS
 *
 */

int *array_range(int min, int max)
{
	int *myPointer;
	int myInt1, myInts;

	if (min > max)
		return (NULL);

	myInts = max - min + 1;

	myPointer = malloc(sizeof(int) * myInts);

	if (myPointer == NULL)
		return (NULL);

	for (myInt1 = 0; min <= max; myInt1++)
		myPointer[myInt1] = min++;

	return (myPointer);
}
