#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - sum of diagonal
 * @a: 2d int array
 * @size: size of array
 */

void print_diagsums(int *a, int size)
{
	int i, sum, sizer;

	i = 0;
	sum = 0;
	sizer = size * size;
	while (i < sizer)
	{
		if (i % (size + 1) == 0)
		{
			sum += a[i];
		}
		i++;
	}
	printf("%d, ", sum);

	sum = 0;
	i = 0;
	while (i < sizer)
	{
		if (i % (size - 1) == 0 && i != (sizer - 1) && i != 0)
		{
			sum += a[i];
		}
		i++;
	}
	printf("%d\n", sum);
}
