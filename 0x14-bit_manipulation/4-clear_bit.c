#include "main.h"

/**
 * set_bit - print binary of a decimal
 * @n: number
 * @index: index
 * Return: value bit
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
