#include "main.h"

/**
 * flip_bits - a function that counts the number of bits to change
 *
 * @n: first int
 * @m: second int
 *
 * Return: SUCCESS
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int myInt1, cnt = 0;
	unsigned long int cur;
	unsigned long int ex = n ^ m;

	for (myInt1 = 63; myInt1 >= 0; myInt1--)
	{
		cur = ex >> myInt1;
		if (cur & 1)
			cnt++;
	}

	return (cnt);
}
