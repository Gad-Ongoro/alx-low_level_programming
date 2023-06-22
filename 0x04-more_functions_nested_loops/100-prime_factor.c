#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	long int num1;
	long int mxnum;
	long int nm2;

	num1 = 612852475143;
	mxnum = -1;

	while (num1 % 2 == 0)
	{
		mxnum = 2;
		num1 /= 2;
	}

	for (nm2 = 3; nm2 <= sqrt(num1); nm2 = nm2 + 2)
	{
		while (num1 % nm2 == 0)
		{
			mxnum = nm2;
			num1 = num1 / nm2;
		}
	}

	if (num1 > 2)
		mxnum = num1;

	printf("%ld\n", mxnum);

	return (0);
}
