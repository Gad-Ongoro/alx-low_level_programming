#include "main.h"

#include <stdlib.h>

/**
 * *malloc_checked - a function that allocates memory using malloc
 *
 * @b: num of bytes to be allocated
 *
 * Return: SUCCESS
 *
 */

void *malloc_checked(unsigned int b)
{
	void *myPointer;

	myPointer = malloc(b);

	if (myPointer == NULL)
		exit(98);

	return (myPointer);
}
