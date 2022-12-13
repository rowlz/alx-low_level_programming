#include <unistd.h>
#include "main.h"

/**
 * _islower - The start of program
 * @c: input
 * Description : prints out the alphabet in lower case
 * Return: 1 if lower case, 0 is upper
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
