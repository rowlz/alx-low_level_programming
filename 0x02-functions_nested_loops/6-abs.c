#include <unistd.h>
#include "main.h"

/**
 * _abs - The start of program
 * @n: input
 * Description : prints out the alphabet in lower case
 * Return: 1 and print '+'if n greater than zero
 * 0 and print '0' if zero
 * -1 and prints '-' if less than zero
*/

int _abs(int n)
{

	if (n >= 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		n = n + (2 * n);
		return (n);
	}

	return (0);

}
