#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints all arguments it receives
 *
 * @argc: arguments
 *
 * @argv: arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int myInt;

	for (myInt = 0; myInt < argc; myInt++)
	{
		printf("%s\n", argv[myInt]);
	}

	return (0);
}
