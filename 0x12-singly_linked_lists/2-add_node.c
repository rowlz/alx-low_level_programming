#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - prints the number of elements of a list
 * @head: a list parameter
 * @str: string
 * Return: the number of nodes
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int l;

	for (l = 0; str[l] != '\0'; l++)
		;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = l;
	new_node->str = strdup(str);
	new_node->next = (*head);
	(*head) = new_node;

	return (new_node);
}
