#include "main.h"
#include <stdlib.h>


/**
 * *myfunc - func
 *
 * @mystr1: str1
 *
 * @mystr2: str2
 *
 * @gd: num of multiples
 *
 * Return: SUCCESS
 *
 */

char *myfunc(char *mystr1, char mystr2, unsigned int gd)
{
	unsigned int alxc;

	for (alxc = 0; alxc < gd; alxc++)
	{
		mystr1[alxc] = mystr2;
	}

	return (mystr1);
}

/**
 * *_calloc -  a function that allocates memory for an array, using malloc.
 *
 * @nmemb: num of elements in array
 *
 * @size: size each element
 *
 * Return: SUCCESS
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *myPointer;

	if (nmemb == 0 || size == 0)
		return (NULL);

	myPointer = malloc(size * nmemb);

	if (myPointer == NULL)
		return (NULL);

	myfunc(myPointer, 0, nmemb * size);

	return (myPointer);
}
