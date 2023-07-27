#include <stdlib.h>

#include <string.h>

#include "lists.h"

/**
 * add_node - A function that adds a new node at the beginning of list_t
 *
 * @head: double pointer
 *
 * @str: string
 *
 * Return: SUCCESS
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *alx;
	unsigned int len = 0;

	while (str[len])
	len++;

	alx = malloc(sizeof(list_t));
	if (!alx)
	return (NULL);

	alx->str = strdup(str);
	alx->len = len;
	alx->next = (*head);
	(*head) = alx;

	return (*head);
}
