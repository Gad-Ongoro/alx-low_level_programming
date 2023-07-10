#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * rslt_str - a function that splits a string into words
 *
 * @s: string
 *
 * Return: SUCCESS
 */

int rslt_str(char *s)
{
	int i1, i3 = 0;
	int i2;

	for (i2 = 0; s[i2] != '\0'; i2++)
	{
		if (s[i2] == ' ')
			i1 = 0;
		else if (i1 == 0)
		{
			i1 = 1;
			i3++;
		}
	}

	return (i3);
}

/**
 * **strtow - a function that splits a string into words
 *
 * @str: str to be splited
 *
 * Return: SUCCESS
 *
 */

char **strtow(char *str)
{
	char **c1, *c2;
	int cc, dd = 0, ee = 0, wps, zeus = 0, stt, fn;

	while (*(str + ee))
		ee++;
	wps = rslt_str(str);
	if (wps == 0)
		return (NULL);

	c1 = (char **) malloc(sizeof(char *) * (wps + 1));
	if (c1 == NULL)
		return (NULL);

	for (cc = 0; cc <= ee; cc++)
	{
		if (str[cc] == ' ' || str[cc] == '\0')
		{
			if (zeus)
			{
				fn = cc;
				c2 = (char *) malloc(sizeof(char) * (zeus + 1));
				if (c2 == NULL)
					return (NULL);
				while (stt < fn)
					*c2++ = str[stt++];
				*c2 = '\0';
				c1[dd] = c2 - zeus;
				dd++;
				zeus = 0;
			}
		}
		else if (zeus++ == 0)
			stt = cc;
	}

	c1[dd] = NULL;

	return (c1);
}
