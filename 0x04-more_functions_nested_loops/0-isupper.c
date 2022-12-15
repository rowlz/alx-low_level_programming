#include "main.h"
#include <stdio.h>

/**
 * _isupper - returms 0 or 1 if upper
 * @c: input
 * Return: 0 or 1
*/

int _isupper(int c)
{
	if (c >= 41 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
