#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 *
 * @s: str to reverse
 *
 * return: reverse
 */

void print_rev(char *s)
{
int alx = 0;

while (s[alx])
{
	alx++;
{
while (alx--)
{
	_putchar(s[alx]);
}
_putchar('\n');
}
