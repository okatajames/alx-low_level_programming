#include "main.h"
/**
 * create_file - our function that creates an arr of chars
 * @filename: is the name of the file to create
 * @text_content: takes the text content
 *
 * Return: 1 for success, -1 for fail
 */

int create_file(const char *filename, char *text_content)
{
	int o, w, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, length);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
