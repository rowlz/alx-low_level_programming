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
	char y = 'A';

	for (; x <= 'z'; x++)
	{
		putchar(x);
	}

	for (; y <= 'Z'; y++)
	{
		putchar(y);
	}

	putchar('\n');

	return (0);
}
