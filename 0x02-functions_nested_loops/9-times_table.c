#include <unistd.h>
#include "main.h"

/**
 * times_table - The start of program
 * Description : prints out the alphabet in lower case
 * Return: 1 and print '+'if n greater than zero
 * 0 and print '0' if zero
 * -1 and prints '-' if less than zero
*/

void times_table(void)
{
	int row = 0;
	int col;
	int n;

	while (row < 10)
	{
		col = 0;

		while (col < 10)
		{
			n = row * col;

			if (n > 9)
			{
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
			}
			else if (col != 0)
			{
				_putchar(' ');
				_putchar(n + '0');
			}
			else
			{
				_putchar(n + '0');
			}
			if (col != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			col++;
		}
		_putchar('\n');
		row++;
	}

}
