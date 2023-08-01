#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 *
 * @head: pointer
 *
 * Return: SUCCESS
 */

void free_listint2(listint_t **head)
{
	listint_t *myT_M_P;

	if (head == NULL)
		return;

	while (*head)
	{
		myT_M_P = (*head)->next;
		free(*head);
		*head = myT_M_P;
	}

	*head = NULL;
}
