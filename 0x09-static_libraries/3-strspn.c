#include "main.h"

/**
 * _strspn - function
 *
 * @s: string
 *
 * @accept: string
 *
 * Return: SUCCESS
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int myInt1 = 0;
	int myInt2;

	while (*s)
	{
		for (myInt2 = 0; accept[myInt2]; myInt2++)
		{
			if (*s == accept[myInt2])
			{
				myInt1++;
				break;
			}
			else if (accept[myInt2 + 1] == '\0')
				return (myInt1);
		}
		s++;
	}
	return (myInt1);
}
