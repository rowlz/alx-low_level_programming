#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * malloc_checked - a function that allocates memory
 * @b: the amount of memory to br created
 * Return: if faliure oricess termmination of 98
*/

void *malloc_checked(unsigned int b)
{
	int *new_mem = (int *)malloc(sizeof(int) * b);

	if (new_mem == NULL)
	{
		exit (98);
	}
	else
	{
		return (new_mem);
	}
}
