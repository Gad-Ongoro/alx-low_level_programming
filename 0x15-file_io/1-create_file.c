#include "main.h"

/**
 * create_file - a function that creates a file.
 *
 * @filename: pointer to name
 *
 * @text_content: pointer to str
 *
 * Return: SUCCESS
 */

int create_file(const char *filename, char *text_content)
{
int myFiled, my_W, myLength = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (myLength = 0; text_content[myLength];)
myLength++;
}

myFiled = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
my_W = write(myFiled, text_content, myLength);

if (myFiled == -1 || my_W == -1)
return (-1);

close(myFiled);

return (1);
}
