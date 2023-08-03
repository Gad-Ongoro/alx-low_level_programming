#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 *
 * @n: int to check
 *
 * @index:  index, starting from 0 of the bit you want to get
 *
 * Return: SUCCESS
 */

int get_bit(unsigned long int n, unsigned int index)
{
int alx;

if (index > 63)
return (-1);

alx = (n >> index) & 1;

return (alx);
}
