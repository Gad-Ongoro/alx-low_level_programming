#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - a function that concatenates two strings.
 *
 * @s1: string 1
 *
 * @s2: string 2
 *
 * @n: num of  bytes from s2 to concatenate to s1
 *
 * Return: SUCCESS
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *myStr;
unsigned int myInt1 = 0, myInt2 = 0, myI3 = 0, myI4 = 0;

while (s1 && s1[myI3])
	myI3++;
while (s2 && s2[myI4])
	myI4++;

if (n < myI4)
	myStr = malloc(sizeof(char) * (myI3 + n + 1));
else
	myStr = malloc(sizeof(char) * (myI3 + myI4 + 1));

if (!myStr)
	return (NULL);

while (myInt1 < myI3)
{
	myStr[myInt1] = s1[myInt1];
	myInt1++;
}

while (n < myI4 && myInt1 < (myI3 + n))
	myStr[myInt1++] = s2[myInt2++];

while (n >= myI4 && myInt1 < (myI3 + myI4))
	myStr[myInt1++] = s2[myInt2++];

myStr[myInt1] = '\0';

return (myStr);
}
