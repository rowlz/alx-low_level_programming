#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * reverse_array - concat two strings
 * @a: 1
 * @n: 2
 * Return: 0
*/

void reverse_array(int *a, int n)
{
	int b;
	int hold;

	for (b = 0; b < (n / 2); b++)
	{
		hold = a[b];
		a[b] = a[n - b - 1];
		a[n - b - 1] = hold;
	}


}
