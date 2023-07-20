#include "variadic_functions.h"

#include <stdio.h>

#include <stdarg.h>

/**
 * print_numbers - A function that prints numbers, followed by a new line.
 *
 * @separator: Str to be printed between numbers
 *
 * @n: number of integers passed to the function.
 *
 * @...: variable to print
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list myInt;
	unsigned int myIndex;

	va_start(myInt, n);

	for (myIndex = 0; myIndex < n; myIndex++)
	{
		printf("%d", va_arg(myInt, int));

		if (myIndex != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(myInt);
}
