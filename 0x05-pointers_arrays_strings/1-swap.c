#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * swap_int - swaps values of two integers
 * @a: first integer
 * @b: second integer
 * Return: Always 0
*/

void swap_int(int *a, int *b)
{
	int cpy_a;
	int cpy_b;

	cpy_a = *a;
	cpy_b = *b;

	*a = cpy_b;
	*b = cpy_a;
}
