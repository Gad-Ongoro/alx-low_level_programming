#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- A function that reads text file print to STDOUT
 *
 * @filename: file
 *
 * @letters: letters
 *
 * Return: SUCCESS
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
char *buffer;
ssize_t miles;
ssize_t alx;
ssize_t fc;

miles = open(filename, O_RDONLY);
if (miles == -1)
return (0);
buffer = malloc(sizeof(char) * letters);
fc = read(miles, buffer, letters);
alx = write(STDOUT_FILENO, buffer, fc);

free(buffer);
close(miles);
return (alx);
}
