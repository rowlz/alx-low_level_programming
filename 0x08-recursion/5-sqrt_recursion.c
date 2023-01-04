#include "main.h"

/**
 * _sqrt_recursion - returs asquare
 * @n: number
 * Return: x power of y
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1))
}

/**
 * _sqrt_f - to use in the function above
 * @c: number
 * @i: to increase by
 * Return: sqr root
 */

int _sqrt_f(int c, int i)
{
	int square;

	square = i * i;
	if (square == c)
		return (i);
	else if (square < c)
		return (_sqrt(c, i + 1));
	else
		return (-1);
}
