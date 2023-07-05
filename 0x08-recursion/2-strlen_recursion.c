#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string
 *
 * @s: string
 *
 * Return: Success
 *
 */

int _strlen_recursion(char *s)
{
int myInt = 0;

if (*s)
{
myInt++;
myInt += _strlen_recursion(s + 1);
}

return (myInt);
}
