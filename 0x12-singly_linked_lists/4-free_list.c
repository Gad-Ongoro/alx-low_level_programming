#include <stdlib.h>

#include "lists.h"

/**
 * free_list - A function that frees list_t
 *
 * @head: list to free
 *
 */

void free_list(list_t *head)
{
	list_t *myTmp;

	while (head)
	{
	myTmp = head->next;
	free(head->str);
	free(head);
	head = myTmp;
	}
}
