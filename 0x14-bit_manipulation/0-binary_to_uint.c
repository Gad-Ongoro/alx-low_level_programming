#include "main.h"

/**
 * binary_to_uint - a function that converts binary number to an unsigned int
 *
 * @b: str
 *
 * Return: SUCCESS
 *
 */

unsigned int binary_to_uint(const char *b)
{
int myInt;
unsigned int myIn2 = 0;

if (!b)
return (0);

for (myInt = 0; b[myInt]; myInt++)
{
if (b[myInt] < '0' || b[myInt] > '1')
return (0);
myInt2 = 2 * myInt2 + (b[myInt] - '0');
}

return (myInt2);
}
