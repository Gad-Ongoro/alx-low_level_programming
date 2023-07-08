#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - function
 *
 * @str: str
 *
 * Return: 0
 */

int check_num(char *str)
{
	unsigned int ui;

	ui = 0;
	while (ui < strlen(str))

	{
		if (!isdigit(str[ui]))
		{
			return (0);
		}

		ui++;
	}
	return (1);
}

/**
 * main - adds positive numbers
 *
 * @argc: argument
 *
 * @argv: argument
 *
 * Return: 0
 *
 */

int main(int argc, char *argv[])
{
	int ui;
	int mynumx;
	int ans = 0;

	ui = 1;
	while (ui < argc)
	{
		if (check_num(argv[ui]))

		{
			mynumx = atoi(argv[ui]);
			ans += mynumx;
		}

		else
		{
			printf("Error\n");
			return (1);
		}

		ui++;
	}

	printf("%d\n", ans);

	return (0);
}
