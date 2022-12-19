#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - prints a string in reverse
 * @str: string
 * Return: Always 0
*/

void puts2(char *str)
{
	int a;
	int b;
	int length;

	for (a = 0; str[a] != '\0'; a++)
	{

	}

	length = a;

	for (b = 0; b <= length; b++)
	{
		if (b % 2 == 0)
		{
			_putchar(str[b]);
		}
	}

	_putchar('\n');
}
