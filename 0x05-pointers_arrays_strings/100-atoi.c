#include "main.h"

/**
 * _atoi - converts a string to an integer.
 *
 * @s: str to convert
 *
 * Return: 0
 */
int _atoi(char *s)
{
	int myInt1, myInt2, myInt3, myInt4, myInt5, myInt6 = 0;

	while (s[myInt4] != '\0')
		myInt4++;

	while (myInt1 < myInt4 && myInt5 == 0)
	{
		if (s[myInt1] == '-')
			++myInt2;

		if (s[myInt1] >= '0' && s[myInt1] <= '9')
		{
			myInt6 = s[myInt1] - '0';
			if (myInt2 % 2)
				myInt6 = -myInt6;
			myInt3 = myInt3 * 10 + myInt6;
			myInt5 = 1;
			if (s[myInt1 + 1] < '0' || s[myInt1 + 1] > '9')
				break;
			myInt5 = 0;
		}
		myInt1++;
	}

	if (myInt5 == 0)
		return (0);

	return (myInt3);
}
