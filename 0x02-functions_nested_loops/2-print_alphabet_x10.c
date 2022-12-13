#include <unistd.h>
#include "main.h"

/**
 * print_alphabet_x10 - The start of program
 * Description : prints out the alphabet in lower case
 * Return - 0
*/

void print_alphabet_x10(void)
{
	int x = 1;

	while (x <= 10)
	{

		char c = 'a';

		for (; c <= 'z'; c++)
		{
			_putchar(c);
		}

		_putchar('\n');
		x++;
	}

}
