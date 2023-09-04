#include "main.h"
/**
 * close_file - file io function
 * @file_fd: name of file to read
 *
 * closes file
 *
 * Return: 0 on Success,
 * 100 on error
 */
int close_file(const int file_fd)
{
	if (close(file_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
				file_fd);
		return (100);
	}
	return (0);
}
/**
 * main - check the code
 * @ac: number of args
 * @av: args
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int file_from_fd, file_to_fd, bytes_read;
	char buf[1024];
	char *file_from, *file_to;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = av[1];
	file_to = av[2];
	file_from_fd = open(file_from, O_RDONLY);
	if (file_from_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				file_from);
		exit(98);
	}
	file_to_fd = open(file_to, O_WRONLY | O_CREAT | O_TRUNC,
					  S_IREAD | S_IWUSR | S_IWGRP);
	if (file_to_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		close_file(file_from_fd);
		exit(99);
	}
	while ((bytes_read = read(file_from_fd, buf, 1024)) > 0)
	{
		if (write(file_to_fd, buf, bytes_read) != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			close_file(file_from_fd);
			close_file(file_to_fd);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		close_file(file_from_fd);
		close_file(file_to_fd);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				file_from);
		exit(98);
	}
	if (close_file(file_from_fd) != 0 || close_file(file_to_fd) != 0)
		exit(100);
	return (0);
}
