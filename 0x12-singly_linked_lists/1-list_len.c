#include <stdlib.h>

#include "lists.h"

/**
 * list_len - A function that returns the number of elements in list_t
 *
 * @h: pointer
 *
 * Return: SUCCESS
 */

size_t list_len(const list_t *h)
{
	size_t mySz = 0;

	while (h)
	{
	mySz++;
	h = h->next;
	}
	return (mySz);
}
