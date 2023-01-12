#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - a function that concat two string to memory
 * @s1: string one
 * @s2: string two
 * Return: if faliure oricess termmination of 98
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int string_one_len = strlen(s1);
	unsigned int string_two_len = strlen(s2);
	unsigned int total_len = string_one_len + string_two_len;
	unsigned int i, j;

	char *new_string = (char *)malloc(sizeof(char) * total_len);

	if (new_string == NULL)
	{
		return (NULL);
	}

	if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; i < string_one_len; i++)
	{
		new_string[i] = s1[i];
	}

	if (n >= string_two_len)
	{
		for (j = 0; j < string_two_len; j++)
		{
			new_string[i] = s2[j];
			i++;
		}
	}
	else if (n < string_two_len)
	{
		for (j = 0; j < n; j++)
		{
			new_string[i] = s2[j];
			i++;
		}
		new_string[i] = '\0';
	}
	return (new_string);


}
