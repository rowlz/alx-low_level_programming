#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name using a function
 * @name: Name to be printed
 * @f: function to be used
 * Return: returns something
*/

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
