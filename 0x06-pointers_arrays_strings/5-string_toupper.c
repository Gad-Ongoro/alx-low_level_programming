#include "main.h"

/**
 * string_toupper - function that changes letters of string to uppercase
 *
 * @n: pointer
 *
 * Return: n
 *
 */

char *string_toupper(char *n)
{
	int alx = 0;

	while (n[alx] != '\0')
	{
		if (n[alx] >= 'a' && n[alx] <= 'z')
			n[alx] = n[alx] - 32;
		alx++;
	}
	return (n);
}
