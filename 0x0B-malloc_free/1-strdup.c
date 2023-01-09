#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - Returns a atring to a new memory
 * @str: The size of the array
 * Return: Null is str = NULL or insufficient memory
*/

char *_strdup(char *str)
{
	int dup_string_len = strlen(str);
	int i;
	char *dup_string = (char *)malloc(sizeof(char) * dup_string_len);

	if (str == NULL || dup_string == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < dup_string_len; i++)
	{
		dup_string[i] = str[i];
	}
	return (dup_string);
}
