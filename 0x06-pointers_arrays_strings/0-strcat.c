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
	_putchar("%s", *dest);
	_putchar("%s", "%s", *src, "\0");

	return (0);
}
