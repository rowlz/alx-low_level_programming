#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * array_range - a function that allocates memory for an array
 * @min: number of elements
 * @max: size of each bytes space
 * Return: if faliure return NULL
*/

int *array_range(int min, int max)
{
	int *new_array;
	int i;
	int ndiff = max - min;

	if (min > max)
	{
		return (0);
	}

	new_array = (int *)malloc(sizeof(int) * ndiff + 1);

	if (new_array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= ndiff; i++)
	{
		new_array[i] = min;
		min++;
	}

	return (array);
}
