#include "lists.h"

/**
 * sum_listint -  a function that returns
 * the sum of all the data (n) of a listint_t linked list.
 *
 * @head: node 0
 *
 * Return: SUCCESS
 *
 */
int sum_listint(listint_t *head)
{
	int my_S = 0;
	listint_t *myT_M_P = head;

	while (myT_M_P)
	{
		my_S += myT_M_P->n;
		myT_M_P = myT_M_P->next;
	}

	return (my_S);
}
