#include "main.h"

/**
 * _strpbrk - function
 *
 * @s: string
 *
 * @accept: string
 *
 * Return: SUCCESS
 *
 */

char *_strpbrk(char *s, char *accept)
{
	int myInt;

	while (*s)
	{
		for (myInt = 0; accept[myInt]; myInt++)
		{
		if (*s == accept[myInt])
		return (s);
		}
	s++;
	}

return ('\0');
}
