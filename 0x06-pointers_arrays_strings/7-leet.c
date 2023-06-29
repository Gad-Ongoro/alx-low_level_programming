#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 *
 * @n: input
 *
 * Return: n
 */

char *leet(char *n)
{
	int alx1, alx2;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (alx1 = 0; n[alx1] != '\0'; alx1++)
	{
		for (alx2 = 0; alx2 < 10; alx2++)
		{
			if (n[alx1] == a[alx2])
			{
				n[alx1] = b[alx2];
			}
		}
	}
	return (n);
}
