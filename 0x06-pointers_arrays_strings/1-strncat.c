#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strncat - concat two strings
 * @dest: 1
 * @src: 2
 * @n: 3
 * Return: 0
*/

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	{
		;
	}
	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest[a] = src[b];
		a++;
	}

	dest[a] = '\0';
	return (dest);

}
