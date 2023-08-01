#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
listint_t *myT_m_p;

while (head)
{
	myT_m_p = head->next;
	free(head);
	head = myT_m_p;
}
}
