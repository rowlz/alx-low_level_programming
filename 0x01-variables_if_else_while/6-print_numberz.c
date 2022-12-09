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
	int x = '0';

	for (; x <= '9'; x++)
	{
		putchar(x);
	}

	putchar('\n');

	return (0);
}
