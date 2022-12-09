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
	char x = '0';
	char y = 'a';

	for (; x <= '9'; x++)
	{
		putchar(x);
	}

	for (; y <= 'f'; y++)
	{
		putchar(y);
	}

	putchar('\n');

	return (0);
}
