#include "lists.h"

/**
 * sum_listint- print integers in the list
 * @head: linked list
 * Return: a head note
 */

int sum_listint(listint_t *head)
{
	listint_t *tmp = head;
	int sum = 0;

	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
