#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 *
 * @head: pointer
 *
 * Return: SUCCESS
 *
 */

int pop_listint(listint_t **head)
{
listint_t *myT_M_P;
int num;

if (!head || !*head)
return (0);

num = (*head)->n;
myT_M_P = (*head)->next;
free(*head);
*head = myT_M_P;

return (num);
}
