#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns
 * the nth node of a listint_t linked list.
 *
 * @head: node 0
 *
 * @index: index
 *
 * Return: SUCCESS
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int myInt = 0;
	listint_t *myT_M_P = head;

	while (myT_M_P && myInt < index)
	{
		myT_M_P = myT_M_P->next;
		myInt++;
	}

	return (myT_M_P ? myT_M_P : NULL);
}
