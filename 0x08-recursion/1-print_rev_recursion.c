#include "main.h"

/**
 * _print_rev_recursion - prints out a string with recursion
 * @s: string
 * Return: The string value
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
