#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * free_grid - Returns a pointer to a new grid
 * @grid: The width of the 2D array
 * @height: The height of the 2D array
 * Return: Null is width/height is neg
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
