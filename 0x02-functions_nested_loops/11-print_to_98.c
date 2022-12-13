#include <unistd.h>
#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - The start of program
 * @n: input
 * Description : prints out the alphabet in lower case
 * Return: 1 and print '+'if n greater than zero
 * 0 and print '0' if zero
 * -1 and prints '-' if less than zero
*/

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n--;
		}
	}
	else
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n++;
		}
	}
	printf("\n");

}
