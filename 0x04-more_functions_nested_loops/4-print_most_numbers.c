#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - returms multiplaction
 * Return: 0 or 1
*/

void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i == 50 || i == 52)
		{

		}
		else
		{
			_putchar(i);
		}
	}

	_putchar('\n');
}
