#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>

/**
 * main - A program that adds positive intergers
 * @argc: the argument count
 * @argv: the arguement Value
 * Return: 1 if an error
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] < 47 || *argv[i] > 57)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(argv[i]);
			}
		}

		printf("%d\n", sum);
	}
	return (0);
}
