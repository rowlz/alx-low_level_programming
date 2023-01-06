#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - A program that prints the number or args passed to it
 * Description: Returns itself
 * @argc: the argument count
 * @argv: the arguement Value
 * Return: the number of arg
 */

int main(int argc, char *argv[])
{
	(void) argv;

	if (argc > 1)
	{
		printf("%d\n", argc - 1);
	}
	else
	{
		printf("%d\n", 0);
	}

	return (0);
}
