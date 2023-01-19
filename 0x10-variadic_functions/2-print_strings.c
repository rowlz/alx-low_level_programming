#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints the string arguements
 * @separator: constant character
 * @n: constant int
 * Return: the sum of numbers
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *strings

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		strings = va_arg(stringss, char *);
		if (strings == NULL)
			printf("(nil)");
		else
			printf("&s", strings);
		if (i != (n -1) && separator != NULL)
			printf("%s", separator);

	}
	printf("\n");

	va_end(list);
}
