#include "main.h"

/**
 * is_prime_number - prints a prime
 * @n: number
 * Return: prime
 */

int is_prime_number(int n)
{
	return (_is_prime(n, n / 2));
}

/**
 * _is_prime - checks for prime
 * @num: num check
 * @i: value
 * Return: prime check
 */

int _is_prime(int num, int i)
{
	if (i == 1)
	{
		return (i);
	}

	else
	{
		if (num % i == 0)
		{
			return (0);
		}
		else
		{
			return (_is_prime(num, i - 1));
		}
	}
}
