#include "main.h"

/**
 * print_chessboard - print chessbrd
 * @a: 2d arrays
 */

void print_chessboard(char (*a)[8])
{
	int r, c;

	r = 0;
	while (r < 8)
	{
		c = 0;
		while (c < 8)
		{
			_putchar(a[r][c]);
			c++;
		}
		_putchar('\n');
		r++;

	}
}
