#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - Creates an array of characters
 * @size: The size of the array
 * @c: the specific character
 * Return: Null is size = 0 or fails
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *new_array = (char *)malloc(sizeof(char) * size);

	if (new_array == NULL || size == 0)
	{
		return (0);
	}

	for (i = 0; i < (size); i++)
	{
		new_array[i] = c;
	}

	return (new_array);
}
