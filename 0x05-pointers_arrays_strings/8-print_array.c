#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_array - swaps values of two integers
 * @a: string
 * @n: nmber
 * Return: Always 0
*/

void print_array(int *a, int n)
{
	int b;

	for (b = 0; a[b] <= n; b++)
	{
		_putchar(a[b]);
	}
}
