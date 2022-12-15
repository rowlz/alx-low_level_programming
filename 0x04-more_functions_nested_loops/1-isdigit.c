#include "main.h"
#include <stdio.h>

/**
 * _isdigit - returms 0 or 1 if upper
 * @c: input
 * Return: 0 or 1
*/

int _isdigit(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (0);
	}
	else if (c >= 97 && c <= 122)
	{
		return (0);
	}
	else if (c >= 48 && c <= 57)
	{
		return (1);
	}

	return (0);
}
