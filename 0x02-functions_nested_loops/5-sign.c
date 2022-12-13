#include <unistd.h>
#include "main.h"

/**
 * print_sign - The start of program
 * @n: input
 * Description : prints out the alphabet in lower case
 * Return: 1 and print '+'if n greater than zero
 * 0 and print '0' if zero
 * -1 and prints '-' if less than zero
*/

int print_sign(int n)
{
	if (n > 48)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 48)
	{
		_putchar('-');
		return (-1);
	}

	return (0);

}
