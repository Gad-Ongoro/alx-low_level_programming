#include "main.h"

/**
 * _strstr - func
 *
 * @haystack: str
 *
 * @needle: str
 *
 * Return: SUCCESS
 *
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *g = haystack;
		char *m = needle;

		while (*g == *m && *m != '\0')
		{
			g++;
			m++;
		}

		if (*m == '\0')
			return (haystack);
	}

	return (0);
}
