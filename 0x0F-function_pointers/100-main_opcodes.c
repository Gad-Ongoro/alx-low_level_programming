#include <stdio.h>

#include <stdlib.h>

/**
 * main - a program that prints the opcodes of its own main function
 *
 * @argc: arguments
 *
 * @argv: arguments array
 *
 * Return: SUCCESS
 */

int main(int argc, char *argv[])
{
	int byT, myInt;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byT = atoi(argv[1]);

	if (byT < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (myInt = 0; myInt < byT; myInt++)
	{
		if (myInt == byT - 1)
		{
			printf("%02hhx\n", arr[myInt]);
			break;
		}
		printf("%02hhx ", arr[myInt]);
	}
	return (0);
}
