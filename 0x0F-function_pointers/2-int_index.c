#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Prints a name using a function
 * @array: Name to be printed
 * @size: function to be used
 * @cmp: function
 * Return: returns something
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i] != 0))
		{
			return (i);
		}
	}

	return (-1);
}
