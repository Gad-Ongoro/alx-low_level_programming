#include <stdlib.h>

#include <string.h>

#include "lists.h"

/**
 * add_node_end - A function that adds a new node at the end of list_t
 *
 * @head: double pointer
 *
 * @str: string
 *
 * Return: SUCCESS
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *alx;
	list_t *myTmp = *head;
	unsigned int len = 0;

	while (str[len])
	len++;

	alx = malloc(sizeof(list_t));
	if (!alx)
	return (NULL);

	alx->str = strdup(str);
	alx->len = len;
	alx->next = NULL;

	if (*head == NULL)
	{
	*head = alx;
	return (alx);
	}

	while (myTmp->next)
	myTmp = myTmp->next;

	myTmp->next = alx;

	return (alx);
}
