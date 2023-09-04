#include "main.h"

/**
 * create_file - A function that creates a file.
 *
 * @filename: pointer
 *
 * @text_content: pointer
 *
 * Return: SUCCESS
 */

int create_file(const char *filename, char *text_content)
{
	int fwd, wwe, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	fwd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wwe = write(fwd, text_content, length);

	if (fwd == -1 || wwe == -1)
		return (-1);

	close(fwd);

	return (1);
}
