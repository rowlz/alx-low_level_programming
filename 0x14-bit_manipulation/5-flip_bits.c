#include "main.h"

/**
 * flip_bits - print binary of a decimal
 * @n: 1 number
 * @m: 2 number
 * Return: value bit
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	int count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++
	}

	return (count);
}
