#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees 2d memory
 * @grid: 2 dimensional grid
 * @height: height
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{

int i;

for (i = 0; i < height; i++)
{
free(grid[i]);
}

free(grid);
}
