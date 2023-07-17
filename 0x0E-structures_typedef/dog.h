#ifndef DOG_H
#define DOG_H

/**
 * struct dog - description
 *
 * @name: name
 *
 * @age: age
 *
 * @own: owner
 *
 */

struct dog
{
	char *name;
	float age;
	char *own;
};

/**
 * dogTdf - typedef for dog
 *
 */
typedef struct dog dogTdf;

void init_dog(struct dog *d, char *name, float age, char *own);
void print_dog(struct dog *d);
dogTdf *new_dog(char *name, float age, char *own);
void free_dog(dogTdf *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
