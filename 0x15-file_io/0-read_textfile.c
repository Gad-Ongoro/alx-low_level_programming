#include "main.h"

#include <stdlib.h>

/**
 * read_textfile- a function that reads a text file
 * prints it to the POSIX standard output.
 *
 * @filename: file
 *
 * @letters: letters
 *
 * Return: SUCCESS
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
char *my_Buf;
ssize_t alx;
ssize_t alx1;
ssize_t fin;

alx = open(filename, O_RDONLY);
if (alx == -1)
return (0);
my_Buf = malloc(sizeof(char) * letters);
fin = read(alx, my_Buf, letters);
alx1 = write(STDOUT_FILENO, my_Buf, fin);

free(my_Buf);
close(alx);
return (alx1);
}
