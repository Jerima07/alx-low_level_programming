#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid -free a 2 dimentional grid
 * @grid: pointer to the 2 dimensional grid
 * @height: array
 * Return: void
 */
void free_grid(int **grid, int height)
{
	height--;

	while (height >= 0)
	{
		free(*(grid + height));
		height--;
	}
	free(grid);
}
