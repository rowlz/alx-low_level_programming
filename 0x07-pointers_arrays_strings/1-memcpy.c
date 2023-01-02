#include "main.h"

/**
 * _memcpy - Copy mem
 * @dest: char array to copy insinde
 * @src:  char array to copy from
 * @n: size
 * Return: update dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
