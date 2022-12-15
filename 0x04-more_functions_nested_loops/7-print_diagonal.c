#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - returns a line
 * @n: number on lines
 * Return: 0 or 1
*/

void print_diagonal(int n)
{
	int a;
	int b;

	a = 0;

	while (n > 0)
	{
		b = a;
		while (b > 0)
		{
			_putchar(' ');
			b--;
		}
		_putchar('\\');
		_putchar('\n');
		a++;
		n--;

	}
	if (a < 1)
		_putchar('\n');
}
