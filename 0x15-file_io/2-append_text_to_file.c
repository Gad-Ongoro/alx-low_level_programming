#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file.
 *
 * @filename: pointer to file
 *
 * @text_content: str
 *
 * Return: SUCCESS
 */

int append_text_to_file(const char *filename, char *text_content)
{
int myInt1, myInt2, myLength = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (myLength = 0; text_content[myLength];)
myLength++;
}

myInt1 = open(filename, O_WRONLY | O_APPEND);
myInt2 = write(myInt1, text_content, myLength);

if (myInt1 == -1 || myInt2 == -1)
return (-1);

close(myInt1);

return (1);
}
