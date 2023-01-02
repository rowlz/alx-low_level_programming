#include "main.h"

/**
 * _memset - Fills mem with a byte
 * @s: buffer
 * @b: constant
 * @n: number of times of constant
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		s[i] = b;
		n--;
		i++;
	}

	return (s);
}
