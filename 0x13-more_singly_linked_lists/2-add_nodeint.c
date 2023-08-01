#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 *
 * @head: pointer to the first node in the list
 *
 * @n: data to insert in that new node
 *
 * Return: SUCCESS
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *myNum;

myNum = malloc(sizeof(listint_t));
if (!myNum)
return (NULL);

myNum->n = n;
myNum->next = *head;
*head = myNum;

return (myNum);
}
