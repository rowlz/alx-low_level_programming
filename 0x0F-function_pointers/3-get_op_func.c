#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - choses the right function
 * @s: the operator to be passed as arg
 * Return: returns something
*/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 5)
	{
		if (ops[i].op[0] == s[0])
			return (ops[i].f);

		i++;
	}
	return (NULL);
}
