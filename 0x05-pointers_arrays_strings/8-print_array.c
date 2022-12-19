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

	b = 0;


	for (n--; n >= 0; n--, b++)
	{
		printf("%d", a[b]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
