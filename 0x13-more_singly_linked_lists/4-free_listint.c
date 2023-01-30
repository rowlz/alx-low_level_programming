#include "lists.h"

/**
 * free_listint - print integers in the list
 * @head: linked list
 */

void free_listint(listint_t *head)
{
	listint_t *tmp = head;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
