#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *cap_string - concat two strings
 * @n: 1
 * Return: 0
*/

char *cap_string(char *n)
{
	int a, b;

	char *ex = ",;.!?(){}\n\t\" ";

	for (a = 0; *(n + a) != '\0'; a++)
	{
		if (a == 0 && *(n + 1) >= 'a' && *(n + 1) <= 'z')
			n[a] -= 32;

		for (b = 0; b < 13; b++)
		{
			if (n[a] == ex[b])
			{
				if (n[a + 1] >= 'a' && n[a + 1] <= 'z')
				{
					n[a + 1] -= 32;
				}
			}
		}
	}

	return (n);

}
