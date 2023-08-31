#include "main.h"

/**
 * get_bit - a func that returns value of a bit at an index in a decimal
 *
 * @n: number
 *
 * @index: index
 *
 * Return: SUCCESS
 */

int get_bit(unsigned long int n, unsigned int index)
{
int myInt;

if (index > 63)
return (-1);

myInt = (n >> index) & 1;

return (myInt);
}
