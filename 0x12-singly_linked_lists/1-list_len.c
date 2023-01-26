#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * list_len - prints the number of elements of a list
 * @h: a list parameter
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
