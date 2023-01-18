#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Prints a name using a function
 * @array: Name to be printed
 * @size: function to be used
 * @action: function
 * Return: returns something
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;
	int a;

	a = (int)size;

	if (!action || !array)
		return;

	for (i = 0; i < a; i++)
	{
		action(array[i]);
	}
}
