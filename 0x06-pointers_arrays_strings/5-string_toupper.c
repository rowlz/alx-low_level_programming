#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *string_toupper - concat two strings
 * @n: 1
 * Return: 0
*/

char *string_toupper(char *n)
{
	int a;

	for (a = 0; n[a] != '\0'; a++)
	{
		if (n[a] > 96 && n[a] < 123)
			n[a] -= 32;
	}
	return (n);

}
