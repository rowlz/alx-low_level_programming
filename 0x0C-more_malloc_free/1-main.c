#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
*/
int main(int argc, char *argv[])
{
	char *ptr;
	long ret;
	char *concat;

	(void)argc;

	ret = strtoul(argv[1], &ptr, 10);

	concat = string_nconcat("Best ", "School !!!", ret);
	printf("%s\n", concat);
	free(concat);
	return (0);
}
