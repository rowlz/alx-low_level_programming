#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - prints a string in reverse
 * @s: string
 * Return: Always 0
*/

void rev_string(char *s)
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
}
