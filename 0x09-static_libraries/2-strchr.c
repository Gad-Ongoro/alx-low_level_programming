#include "main.h"
#include <stddef.h>

/**
 * _strchr - function
 *
 * @s: str
 *
 * @c: str
 *
 * Return: Success
 *
 */

char *_strchr(char *s, char c)
{
	int myInt = 0;

	for (; s[myInt] >= '\0'; myInt++)
	{
		if (s[myInt] == c)
			return (&s[myInt]);
	}
	return (0);
}
