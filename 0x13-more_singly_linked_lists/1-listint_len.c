#include "lists.h"

/**
 * listint_len - a function that returns number of elements in listint_t list
 *
 * @h: linked list
 *
 * Return: SUCCESS
 *
 */

size_t listint_len(const listint_t *h)
{
size_t myInt = 0;

while (h)
{
	myInt++;
	h = h->next;
}

return (myInt);
}
