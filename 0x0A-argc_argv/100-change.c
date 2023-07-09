#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints minimum number of coins to make change for an amount of money
 *
 * @argc: arguments
 *
 * @argv: arguments
 *
 * Return: SUCCESS
 *
 */

int main(int argc, char *argv[])
{
	int myInt1, myInt2, ans;
	int cns[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	myInt1 = atoi(argv[1]);
	ans = 0;

	if (myInt1 < 0)
	{
		printf("0\n");
		return (0);
	}

	for (myInt2 = 0; myInt2 < 5 && myInt1 >= 0; myInt2++)
	{
		while (myInt1 >= cns[myInt2])
		{
			ans++;
			myInt1 -= cns[myInt2];
		}
	}

	printf("%d\n", ans);
	return (0);
}
