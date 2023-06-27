#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme
 *
 * Return: 0
 */
int main(void)
{
	int passwords[100];
	int jn, glen, myI;

	jn = 0;

	srand(time(NULL));

	for (myI = 0; myI < 100; myI++)
	{
		passwords[myI] = rand() % 78;
		jn += (passwords[myI] + '0');
		putchar(passwords[myI] + '0');
		if ((2772 - jn) - '0' < 78)
		{
			n = 2772 - jn - '0';
			jn += glen;
			putchar(glen + '0');
			break;
		}
	}

	return (0);
}
