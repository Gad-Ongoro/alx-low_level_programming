#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 *
 * @filename: pointer
 *
 * @text_content: str
 *
 * Return: SUCCESS
 */

int append_text_to_file(const char *filename, char *text_content)
{
int oa, wrt, length = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (length = 0; text_content[length];)
length++;
}

oa = open(filename, O_WRONLY | O_APPEND);
wrt = write(oa, text_content, length);

if (oa == -1 || wrt == -1)
return (-1);

close(oa);

return (1);
}
