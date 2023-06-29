#include "main.h"
#include <stdio.h>

/**
 * rot13 - a function that encodes a string using rot13
 *
 * @s: s
 *
 * Return: s
 *
 */

char *rot13(char *s)
{
	int alx1;
	int alx2;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char arot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (alx1 = 0; s[alx1] != '\0'; alx1++)
	{
		for (alx2 = 0; alx2 < 52; alx2++)
		{
			if (s[alx1] == a[alx2])
			{
				s[alx1] = arot[alx2];
				break;
			}
		}
	}
	return (s);
}
