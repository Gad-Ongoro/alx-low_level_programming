#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list
 *
 * @h: linked list
 *
 * Return: SUCCESS
 */

size_t print_listint(const listint_t *h)
{
size_t myInt = 0;

while (h)
{
	printf("%d\n", h->n);
	myInt++;
	h = h->next;
}

return (myInt);
}
