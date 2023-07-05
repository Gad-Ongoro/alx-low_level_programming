#include "main.h"

int prime(int n, int myInt);

/**
 * is_prime_number - returns 1 if the input integer is a prime number esle 0
 *
 * @n: int
 *
 * Return: 1 if n is a prime number, else 0
 */

int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (prime(n, n - 1));
}

/**
 * prime - calculates if a number is prime recursively
 *
 * @n: int
 *
 * @myInt: int itr
 *
 * Return: 1 if n is prime else 0
 */

int prime(int n, int myInt)
{
if (myInt == 1)
return (1);

if (n % myInt == 0 && myInt > 0)
return (0);

return (actual_prime(n, myInt - 1));
}
