#include "main.h"

/**
 * factorial - prints out a string with recursion
 * @n: string
 * Return: The string value
 */

int factorial(int n)
{
	int fact = 0;

	if (n < 0)
		return (-1);
	else if (n < 2)
		return (n);
	fact = n * factorial(n -1);

	return (fact);
}
