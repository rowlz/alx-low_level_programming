#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcmp - concat two strings
 * @s1: 1
 * @s2: 2
 * Return: 0
*/

int _strcmp(char *s1, char *s2)
{
	int a;

	for (a = 0; s1[a] != '\0' || s2[a] != '\0'; a++)
	{
		if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
	}
	return (0);


}
