#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number
 *
 * @n: int
 */

void print_binary(unsigned long int n)
{
int my_Int = 0;
int my_Int2 = 0;
unsigned long int _init;

for (my_Int = 63; my_Int >= 0; my_Int--)
{
_init = n >> my_Int;

if (_init & 1)
{
_putchar('1');
my_Int2++;
}
else if (my_Int2)
_putchar('0');
}
if (!my_Int2)
_putchar('0');
}
