#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - Returns 2 concat atring to a new memory
 * @s1: The first string
 * @s2: Second String
 * Return: Null is str = NULL or insufficient memory
*/

char *str_concat(char *s1, char *s2)
{
	int i;
	int j;

	int s1_len;
	int s2_len;
	int total_len;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	s1_len = strlen(s1);
	s2_len = strlen(s2);
	total_len = s1_len + s2_len;

	char *new_string = (char *)malloc(sizeof(char) * total_len);

	if (new_string == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < s1_len; i++)
	{
		new_string[i] = s1[i];
	}

	for (j = 0; j < s2_len; j++)
	{
		new_string[s1_len + 1] = s2[j];
	}

	return (new_string);

}
