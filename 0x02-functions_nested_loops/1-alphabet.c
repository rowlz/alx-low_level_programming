#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - The start of program
 * Description : prints out the alphabet in lower case
 * Return - 0
*/

void print_alphabet(void)
{
	char c = 'a';

	for (; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');

}
