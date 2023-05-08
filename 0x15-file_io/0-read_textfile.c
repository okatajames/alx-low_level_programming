#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - read a text file and print it to standard output
 * @filename: ptr to the name of file.
 * @letters: int of letters the fucn prints.
 *
 * Return: Return 0 if NULL or fail
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t a, d, r;
	char *buff;

	if (filename == NULL)
	{
		return (0);
	}

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		return (0);
	}
	a = open(filename, O_RDONLY);

	d = read(a, buff, letters);

	r = write(STDOUT_FILENO, buff, d);

	if (a == -1 || d == -1 || r == -1 || r != d)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(a);
	return (r);
}
