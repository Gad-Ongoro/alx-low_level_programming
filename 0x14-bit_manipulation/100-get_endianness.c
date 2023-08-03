#include "main.h"

/**
 * get_endianness - a function that checks the endianness.
 *
 * Return: SUCCESS
 *
 */

int get_endianness(void)
{
	unsigned int my_Int = 1;
	char *my_Char = (char *) &my_Int;

	return (*my_Char);
}
