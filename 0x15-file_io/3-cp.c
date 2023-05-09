#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * check97 - ensures we have the right num of args
 * @argc: arg nums
 *
 * Return: returns void
 */

void check97(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}


/**
 * check98 - checks if file_from exists & readable
 * @check: checks 1 or 0
 * @fdfrom: file desc's file_from, or -1
 * @fdto: file desc for file_to, or -1
 * @file: file_from file name
 *
 * Return: returns void
 */

void check98(ssize_t check, char *file, int fdfrom, int fdto)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		if (fdfrom != -1)
		{
			close(fdfrom);
		}
		if (fdto != -1)
		{
			close(fdto);
		}
		exit(98);
	}
}


/**
 * check99 - Check if file_to was created or can be written to
 * @check: checks 1 or 0
 * @fdfrom: file desc's file_from, or -1
 * @fdto: file desc for file_to, or -1
 * @file: file_from file name
 *
 * Return: returns void
 */

void check99(ssize_t check, char *file, int fdfrom, int fdto)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		if (fdfrom != -1)
		{
			close(fdfrom);
		}
		if (fdto != -1)
		{
			close(fdto);
		}
		exit(99);
	}
}


/**
 * check100 - Check if the file descs were closed properly
 * @check: Check whether true or false
 * @fd: file desc
 *
 * Return: returns void
 */

void check100(int check, int fd)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}


/**
 * main - Copy the file contents from one file to another
 * @argc: args number passed
 * @argv: arr of ptrs to the args
 *
 * Return: returns 0 for success
 */

int main(int argc, char *argv[])
{
	char buffer[1024];
	int fdfrom, fdto, close_to, close_from;
	mode_t file_perms;
	ssize_t lenh, lenw;

	check97(argc);
	fdfrom = open(argv[1], O_RDONLY);
	check98((ssize_t)fdfrom, argv[1], -1, -1);
	file_perms = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	fdto = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_perms);
	check99((ssize_t)fdto, argv[2], fdfrom, -1);
	lenh = 1024;

	while (lenh == 1024)
	{
		lenh = read(fdfrom, buffer, 1024);
		check98(lenh, argv[1], fdfrom, fdto);
		lenw = write(fdto, buffer, lenh);
		if (lenw != lenh)
		{
			lenw = -1;
		}
		check99(lenw, argv[2], fdfrom, fdto);
	}
	close_to = close(fdto);
	close_from = close(fdfrom);
	check100(close_to, fdto);
	check100(close_from, fdfrom);

	return (0);
}
