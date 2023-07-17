#include "dog.h"

#include <stdlib.h>

/**
 * strLen - returns string length
 *
 * @string: string to evaluate
 *
 * Return: SUCCESS
 */

int strLen(char *string)
{
	int myInt1 = 0;

	while (string[myInt1] != '\0')
	{
		myInt1++;
	}

	return (myInt1);
}

/**
 * *strCopy - copies the string pointed to by src
 *
 * including the terminating null byte (\0)
 *
 * to the buffer pointed to by dest
 *
 * @dest: destination
 *
 * @src: source
 *
 * Return: SUCCESS
 *
 */

char *strCopy(char *dest, char *src)
{
	int length, myInt1;

	length = 0;

	while (src[length] != '\0')
	{
		length++;
	}

	for (myInt1 = 0; myInt1 < length; myInt1++)
	{
		dest[myInt1] = src[myInt1];
	}
	dest[myInt1] = '\0';

	return (dest);
}

/**
 * new_dog - a function that creates a new dog.
 *
 * @name: name
 *
 * @age: age
 *
 * @owner: owner
 *
 * Return: SUCCESS
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dot_t *dog;
	int length1;
	int length2;

	length1 = strLen(name);
	length2 = strLen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (length1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (length2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	strCopy(dog->name, name);
	strCopy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
