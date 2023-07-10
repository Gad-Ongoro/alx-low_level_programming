#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, initializes it with specific char
 *
 * @size: size
 *
 * @c: char
 *
 * Return: SUCCESS
 *
 */

char *create_array(unsigned int size, char c)
{
	char *myChar;
	unsigned int myInt;

	myChar = malloc(sizeof(char) * size);
	if (size == 0 || myChar == NULL)
		return (NULL);

	for (myInt = 0; myInt < size; myInt++)
		myChar[myInt] = c;
	return (myChar);
}
