#include "lists.h"

/**
 * get_nodeint_at_index - print integers in the list
 * @head: linked list
 * @index: index
 * Return: a head note
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = head;
	unsigned int count = 0;

	while (tmp && count < index)
	{
		tmp = tmp->next;
		count++;
	}

	return (tmp != NULL ? tmp : NULL);
}
