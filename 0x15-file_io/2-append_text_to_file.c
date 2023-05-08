#include "main.h"

/**
 * _strlen - finds string len
 * append_text_to_file - appends text to file
 * @str: pointer to the string
 *
 * Return: 1 for success, -1 for fail
 */

size_t _strlen(char *str)
{
	size_t s;

	for (s = 0; str[s]; s++)
		;
	return (s);
}

/**
 * append_text_to_file - appends text to file
 * @filename: name of the file
 * @text_content: takes the text content
 *
 * Return: 1 for success, -1 for fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len;

	if (filename == NULL)
		{
			return (-1);
		}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		{
			return (-1);
		}
	if (text_content != NULL)
		len = write(fd, text_content, _strlen(text_content));
	close(fd);

	if (len == -1)
		{
			return (-1);
		}
	return (1);
}
