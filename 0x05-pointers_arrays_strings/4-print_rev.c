#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints a string in reverse
 * @s: string
 * Return: Always 0
*/

void print_rev(char *s)
{
	int a;
	int loop;

	for (a = 0; s[a] != '\0'; a++)
	{

	}

	loop = a;

	for (loop--; loop >= 0; loop--)
	{
		_putchar(s[loop]);
	}
	_putchar('\n');
}
