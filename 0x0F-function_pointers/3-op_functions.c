#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - adds up to integers
 * @a: first integer
 * @b: second integer
 * Return: returns something
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts two integers
 * @a: first integer
 * @b: Second integer
 * Return: REturns something
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two integers
 * @a: first integer
 * @b: second in
 * Return: someting
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two integers
 * @a: first int
 * @b: second int
 * Return: something
*/

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Finds the remainder of two int
 * @a: first int
 * @b: second int
 * Return: somrthing
*/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
