#include "main.h"
#include <stdio.h>

/**
 * print_square - returns a line
 * @size: number on lines
 * Return: 0 or 1
*/

void print_square(int size)
{
	int a;
	int b;

	b = 0;

	while (b < size)
	{
		a = 0;
		while (a < size)
		{
			_putchar('#');
			a++;
		}
		_putchar('\n');
		b++;

	}
	if (size < 1)
		_putchar('\n');
}
