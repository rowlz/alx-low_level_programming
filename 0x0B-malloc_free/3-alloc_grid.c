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

	int *new_grid = (int *)malloc(sizeof(int) * width * height);

	if (width  == 0 || height == 0)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			*(new_grid + 1 * width + j) = i + j;
		}
	}


	return (***new_grid);

}
