#include "main.h"
#include <stdio.h>

/**
 * more_numbers - returms multiplaction
 * Return: 0 or 1
*/

void more_numbers(void)
{
	int a, b;

	a = 0;
	while (a < 10)
	{

		b = 0;
		while (b < 15)
		{

			if (b > 9)
				_putchar(1 + '0');


			_putchar(b % 10 + '0');
			b++;
		}

		a++;
		_putchar('\n');
	}
}
