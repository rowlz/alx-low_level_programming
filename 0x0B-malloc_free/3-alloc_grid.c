#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * alloc_grid - Returns a pointer to a new grid
 * @width: The width of the 2D array
 * @height: The height of the 2D array
 * Return: Null is width/height is neg
*/

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **grid_done;

	if (width + height < 2 || width < 1 || height < 1)
	{
		return (NULL);
	}

	grid_done = malloc(height * 8);
	if (grid_done == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid_done[i] = malloc(width * 4);
		if (grid_done[i] == NULL)
		{
			for (i--; i >= 0; i--)
			{
				free(grid_done[i]);
			}
			free(grid_done);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid_done[i][j] = 0;
		}
	}
	return (grid_done);

}
