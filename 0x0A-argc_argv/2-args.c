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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
