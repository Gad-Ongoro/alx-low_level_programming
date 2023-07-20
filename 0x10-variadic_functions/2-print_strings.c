#include "variadic_functions.h"

#include <stdarg.h>

#include <stdio.h>

/**
 * print_strings - Prints strings, followed by a new line.
 *
 * @separator: The string to be printed between strings.
 *
 * @n: The number of strings passed to the function.
 *
 * @...: A variable number of strings to be printed.
 *
 * Return: SUCCESS
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list myStrs;
	char *myStr;
	unsigned int myIndex;

	va_start(myStrs, n);

	for (myIndex = 0; myIndex < n; myIndex++)
	{
		myStr = va_arg(myStrs, char *);

		if (myStr == NULL)
			printf("(nil)");
		else
			printf("%s", myStr);

		if (myIndex != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(myStrs);
}
