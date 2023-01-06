#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - A program that returns its name
 * Description: Returns itself
 * @argc: the argument count
 * @argv: the arguement Value
 * Return: Its name
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);

	return (0);
}
