#include "main.h"

/**
 * puts_half - a function that prints the second half of a string + \n
 *
 * If the number of characters is odd,
 * the function should print the last n characters of the string,
 * where n = (length_of_the_string - 1) / 2
 *
 * @str: string to print
 *
 * Return: second half of str
 */

void puts_half(char *str)
{
	int myInt1;
	int myInt2;
	int myInt3;

	myInt3 = 0;

	for (myInt1 = 0; str[myInt1] != '\0'; myInt1++)
		myInt3++;

	myInt2 = (myInt3 / 2);

	if ((myInt3 % 2) == 1)
		myInt2 = ((myInt3 + 1) / 2);

	for (myInt1 = myInt2; str[myInt1] != '\0'; myInt1++)
		_putchar(str[myInt1]);
	_putchar('\n');
}
