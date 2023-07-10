#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * free_grid - frees a 2 dimensional grid previously created by alloc_grid func
 *
 * @grid: grid
 *
 * @height: height
 *
 * Return: SUCCESS
 */

void free_grid(int **grid, int height)
{
int frg;

for (frg = 0; frg < height; frg++)
{
free(grid[frg]);
}
free(grid);
}
