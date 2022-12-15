#include "main.h"
#include <stdio.h>

/**
 * print_triangle - returns a line
 * @size: number on lines
 * Return: 0 or 1
*/

void print_triangle(int size)
{
	int a;
	int b;
	int i;
	int d;
	int j;

	a = 0;

	b = size;

	for (i = 0; i < size; i++)
	{
		a = a + 1;
		b = b + 1;

		for (d = b; d > 0; d--)
		{
			_putchar(' ');
		}

		for (j = 0; j < a; j++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}
