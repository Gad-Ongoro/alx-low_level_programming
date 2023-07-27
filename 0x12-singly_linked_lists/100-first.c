#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - a function that prints You're beat! and yet, you must allow,\n
 * I bore my house upon my back!\n
 * a sentence before the main function is executed.
 *
 * Return: SUCCESS
 */

void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
