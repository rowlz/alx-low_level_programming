#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - A program that multiplies its arguments
 * @argc: the argument count
 * @argv: the arguement Value
 * Return: 1 if an error
 */

int main(int argc, char *argv[])
{
	int mul_sum;
	int num_1;
	int num_2;

	if (argc == 3)
	{
		num_1 = atoi(argv[1]);
		num_2 = atoi(argv[2]);

		mul_sum = num_1 * num_2;

		printf("%d\n", mul_sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
