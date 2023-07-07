#include "main.h"

/**
 * _atoi - a function that converts a str into an int
 *
 * @s: str
 *
 * Return: int
 */

int _atoi(char *s)
{
	int myInt1 = 1, myInt2 = 0;
	unsigned int myInt3 = 0;

	while (!(s[myInt2] <= '9' && s[myInt2] >= '0') && s[myInt2] != '\0')
	{
		if (s[myInt2] == '-')
			myInt1 *= -1;
		myInt2++;
	}
	while (s[myInt2] <= '9' && (s[myInt2] >= '0' && s[myInt2] != '\0'))
	{
		myInt3 = (myInt3 * 10) + (s[myInt2] - '0');
		myInt2++;
	}
	myInt3 *= myInt1;
	return (myInt3);
}
