#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _calloc - a function that allocates memory for an array
 * @nmemb: number of elements
 * @size: size of each bytes space
 * Return: if faliure return NULL
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *new_array = (char *)malloc(sizeof(char) * size);
	unsigned int i;

	if (nmemb == 0)
	{
		return (NULL);
	}

	if (size == 0)
	{
		return (0);
	}

	for (i = 0; i < nmemb; i++)
	{
		new_array[i] = 0;
	}

	return (0);
}
