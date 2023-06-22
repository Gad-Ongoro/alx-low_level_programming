#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * but for multiples of three prints Fizz instead of the number
 * and for the multiples of five prints Buzz
 *
 * Return: 0
 */
int main(void)
{
	int myi;

	for (myi = 1; myi <= 100; myi++)
	{
		if (myi % 3 == 0 && myi % 5 != 0)
		{
			printf(" Fizz");
		} else if (myi % 5 == 0 && myi % 3 != 0)
		{
			printf(" Buzz");
		} else if (myi % 3 == 0 && myi % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (myi == 1)
		{
			printf("%d", myi);
		} else
		{
			printf(" %d", myi);
		}
	}
	printf("\n");

	return (0);
}
