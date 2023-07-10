#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers
 *
 * @width: width
 *
 * @height: height
 *
 * Return: SUCCESS
 */

int **alloc_grid(int width, int height)
{
	int **myInt1;
	int myInt2, i3;

	if (width <= 0 || height <= 0)
		return (NULL);

	myInt1 = malloc(sizeof(int *) * height);

	if (myInt1 == NULL)
		return (NULL);

	for (x = 0; myInt2 < height; myInt2++)
	{
		myInt1[myInt2] = malloc(sizeof(int) * width);

		if (myInt1[myInt2] == NULL)
		{
			for (; myInt2 >= 0; myInt2--)
				free(myInt1[myInt2]);

			free(myInt1);
			return (NULL);
		}
	}

	for (myInt2 = 0; myInt2 < height; myInt2++)
	{
		for (i3 = 0; i3 < width; i3++)
			myInt1[myInt2][i3] = 0;
	}

	return (myInt1);
}
