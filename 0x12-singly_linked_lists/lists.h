#ifndef _LIST_HEADER_
#define _LIST_HEADER_

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length os the string
 * @next: points to the next mode
 *
 * Description: singly linked list node structure
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;


size_t print_list(const list_t *h);
#endif
