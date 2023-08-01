#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 *
 * @head: pointer
 *
 * @n: integer
 *
 * Return: SUCCESS
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *myL_s;
	listint_t *my_Tmp = *head;

	myL_s = malloc(sizeof(listint_t));
	if (!myL_s)
		return (NULL);

	myL_s->n = n;
	myL_s->next = NULL;

	if (*head == NULL)
	{
		*head = myL_s;
		return (myL_s);
	}

	while (my_Tmp->next)
		my_Tmp = my_Tmp->next;

	my_Tmp->next = myL_s;

	return (myL_s);
}
