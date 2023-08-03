#include "main.h"

/**
 * flip_bits - a function that returns
 * number of bits you would need to flip to get from one number to another.
 *
 * @n: int 0
 *
 * @m: int 1
 *
 * Return: SUCCESS
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int my_Int, myCnt = 0;
unsigned long int int_Init;
unsigned long int int_ceil = n ^ m;

for (my_Int = 63; my_Int >= 0; my_Int--)
{
int_Init = int_ceil >> my_Int;
if (int_Init & 1)
myCnt++;
}

return (myCnt);
}
