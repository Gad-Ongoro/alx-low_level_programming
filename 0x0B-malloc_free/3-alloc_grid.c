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
	int **i1;
	int i2, i3;

	if (width <= 0 || height <= 0)
		return (NULL);

	i1 = malloc(sizeof(int *) * height);

	if (i1 == NULL)
		return (NULL);

	for (i2 = 0; i2 < height; i2++)
	{
		i1[i2] = malloc(sizeof(int) * width);

		if (i1[i2] == NULL)
		{
			for (; i2 >= 0; i2--)
				free(i1[i2]);

			free(i1);
			return (NULL);
		}
	}

	for (i2 = 0; i2 < height; i2++)
	{
		for (i3 = 0; i3 < width; i3++)
			i1[i2][i3] = 0;
	}

	return (i1);
}
