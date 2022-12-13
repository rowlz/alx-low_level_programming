#include <unistd.h>
#include "main.h"

/**
 * print_last_digit - The start of program
 * @n: input
 * Description : prints out the alphabet in lower case
 * Return: 1 and print '+'if n greater than zero
 * 0 and print '0' if zero
 * -1 and prints '-' if less than zero
*/

int print_last_digit(int n)
{
	int last_digit;

	if( n < 0)
	{
		last_digit = (n % 10) * -1;
		_putchar(last_digit + '0');
		return (last_digit);
	}
	else
	{
		last_digit = n % 10;
		_putchar(last_digit + '0');
		return (last_digit);
	}
	return (last_digit);

}
