#include "main.h"

/**
 * _isalpha - a function that checks for alphabets
 *
 * @c: char to check
 *
 * Return: SUCCESS
 *
 */

int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
