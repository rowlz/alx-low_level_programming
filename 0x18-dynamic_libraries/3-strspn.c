#include "main.h"

/**
 * _strspn - Searches for byte
 * @s: char string array
 * @accept: array to check the byte
 * Return: the bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, k;

	i = 0;
	k = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				k++;
				break;

			}
			j++;
		}
		if (accept[j] == '\0')
			break;
		i++;
	}
	return (k);

}
