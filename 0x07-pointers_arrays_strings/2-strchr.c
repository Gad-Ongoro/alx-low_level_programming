#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 *
 * @s: string
 *
 * @c: character
 *
 * Return: pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found
 *
 */

char *_strchr(char *s, char c)
{
	int myInt1 = 0;

	for (; s[myInt1] >= '\0'; myInt1++)
	{
		if (s[myInt1] == c)
			return (&s[myInt1]);
	}
	return (0);
}
