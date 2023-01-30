#include "lists.h"

/**
 * add_nodeint - print integers in the list
 * @head: linked list
 * @n: int
 * Return: count of nodes
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->next = (*head);
	(*head) = new_node;

	return (new_node);
}
