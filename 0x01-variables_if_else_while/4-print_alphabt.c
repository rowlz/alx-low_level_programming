#include<stdlib.h>
#include<time.h>
#include<stdio.h>

/**
 *main - program starts
 *Description: prints the number
 *Return: 0 all the time
*/

int main(void)
{
	char x = 'a';

	for (; x <= 'z'; x++)
	{
		if (x == 'e' || x == 'q')
		{

		}
		else
		{
			putchar(x);
		}
	}

	putchar('\n');

	return (0);
}
