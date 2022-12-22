#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strncpy - concat two strings
 * @dest: 1
 * @src: 2
 * @n: 3
 * Return: 0
*/

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	for (; a < n; a++)
	{
		dest[a] = '\0';
	}


}
