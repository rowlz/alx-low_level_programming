#include "main.h"

/**
 * largest_number - tests function that prints
 * if integer is positive or negative
 * @a: first integer
 * @b: Second integer
 * @c: Third integer
 * Return: 0
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > a && b > c)
	{
		largest = b;
	}
	else if (c > b && c > a)
	{
		largest = c;
	}

	return (largest);
}
