#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - a function that reallocates a memory block using malloc and free
 *
 * @ptr: pointer to memory allocated by malloc
 *
 * @old_size: the size of allocated memory
 *
 * @new_size: the new size of memory
 *
 * Return: SUCCESS
 *
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *myPointer1;
	char *myPointer2;
	unsigned int myInt01;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	myPointer1 = malloc(new_size);
	if (!myPointer1)
		return (NULL);

	myPointer2 = ptr;

	if (new_size < old_size)
	{
		for (myInt01 = 0; myInt01 < new_size; myInt01++)
			myPointer1[myInt01] = myPointer2[myInt01];
	}

	if (new_size > old_size)
	{
		for (myInt01 = 0; myInt01 < old_size; myInt01++)
			myPointer1[myInt01] = myPointer2[myInt01];
	}

	free(ptr);
	return (myPointer1);
}
