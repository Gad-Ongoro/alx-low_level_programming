#include "main.h"

int square_root(int n, int myInt);

/**
 * _sqrt_recursion - returns natural square root of a number
 *
 * @n: int to be calculated sqroot
 *
 * Return: SUCCESS
 */

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);

return (square_root(n, 0));
}

/**
 * square_root - calcs natural sqrt
 *
 * @n: int
 *
 * @myInt: int itr
 *
 * Return: SUCCESS
 */

int square_root(int n, int myInt)
{
if (myInt * myInt > n)
return (-1);

if (myInt * myInt == n)
return (myInt);

return (actual_sqrt_recursion(n, myInt + 1));
}
