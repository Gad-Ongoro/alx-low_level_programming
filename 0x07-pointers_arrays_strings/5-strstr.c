#include "main.h"

/**
 * _strstr - function that locates a substring
 *
 * @haystack: string
 *
 * @needle: substring
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *myChar1 = haystack;
		char *myChar2 = needle;

		while (*myChar1 == *myChar2 && *myChar2 != '\0')
		{
			myChar1++;
			myChar2++;
		}

		if (*myChar2 == '\0')
			return (haystack);
	}

	return (0);
}
