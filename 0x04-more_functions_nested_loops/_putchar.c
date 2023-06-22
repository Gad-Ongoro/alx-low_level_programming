#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes c to standard output
 * @c: character to print
 *
 * Return: 1, otherwise -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
