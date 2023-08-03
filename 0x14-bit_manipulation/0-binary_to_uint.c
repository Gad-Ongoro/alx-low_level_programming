#include "main.h"

/**
 * binary_to_uint -  a function that converts a binary number to unsigned int
 *
 * @b: points to a string of 0 and 1 chars
 *
 * Return: SUCCESS
 *
 */

unsigned int binary_to_uint(const char *b)
{
int my_Int;
unsigned int my_U_int = 0;

if (!b)
return (0);

for (my_Int = 0; b[my_Int]; my_Int++)
{
if (b[my_Int] < '0' || b[my_Int] > '1')
return (0);
my_U_int = 2 * my_U_int + (b[my_Int] - '0');
}

return (my_U_int);
}
