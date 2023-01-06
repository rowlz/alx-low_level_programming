#include "main.h"

/**
 * _strchr - Searches for string
 * @s: th string that will searched
 * @c: the character to be found in string
 * Return: the character found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		s++;
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
	}
	return (s + 1);

}
