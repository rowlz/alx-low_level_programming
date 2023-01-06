#include <unistd.h>
#include "main.h"

/**
 * _isalpha - The start of program
 * @c: input
 * Description : prints out the alphabet in lower case
 * Return: 1 if lower upper case or letter, 0 otherwise
*/

int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
