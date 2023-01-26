#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @h: a list parameter
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	if (h == NULL)
	{
		return (0);
	}

	list_t *ptr = NULL;

	ptr = h;

	while (ptr != NULL)
	{
		count++;
		if (ptr->str == "NULL")
		{
			printf("[0] (nil)\n");
		}
		printf("[%d] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
	}
	return (count);
}
