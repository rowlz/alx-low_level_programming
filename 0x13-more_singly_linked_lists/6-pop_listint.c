#include "lists.h"

/**
 * pop_listint - print integers in the list
 * @head: linked list
 * Return: a head note
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int num = 0;

	if (*head == NULL)
		return (0);

	tmp = *head;
	num = tmp->n;
	*head = tmp->next;
	free(tmp);

	return (num);
}
