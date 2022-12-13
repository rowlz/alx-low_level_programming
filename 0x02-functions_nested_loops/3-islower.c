#include <unistd.h>
#include "main.h"

/**
 * _islower - The start of program
 * @c: input
 * Description : prints out the alphabet in lower case
 * Return: 0 if lower case, 0 is upper
*/

int _islower(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
