#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int prntNum;

	for (prntNum = 0; prntNum < 10; prntNum++)
	{
		printf("%d", prntNum);
	}
	putchar('\n');
	return (0);
}
