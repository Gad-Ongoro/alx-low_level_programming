#include "variadic_functions.h"

#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters
 *
 * @n: Number of paramters passed
 *
 * @...: Number of paramters to calculate
 *
 * Return: SUCCESS
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list myList;
	unsigned int myInt1, result = 0;

	va_start(myList, n);

	for (myInt1 = 0; myInt1 < n; myInt1++)
		result += va_arg(myList, int);

	va_end(myList);

	return (result);
}
