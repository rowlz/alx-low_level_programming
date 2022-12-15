#include "main.h"
#include <stdio.h>

/**
 * print_line - returns a line
 * @n: number on lines
 * Return: 0 or 1
*/

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}

		_putchar('\n');
	}
}
