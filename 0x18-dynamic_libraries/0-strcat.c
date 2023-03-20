#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strcat - concat two strings
 * @dest: 1
 * @src: 2
 * Return: 0
*/

char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	{
		;
	}
	for (b = 0; src[b] != '\0'; b++)
	{
		dest[a] = src[b];
		a++;
	}

	dest[a] = '\0';
	return (dest);

}
