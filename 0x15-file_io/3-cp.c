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
 * cp_between_files - file io function
 * @file_from: name of file to read
 * @file_to: nam of file to write
 *
 * copies text between files
 *
 * Return: 1 on Success,
 * -1 on error
 */
int cp_between_files(const char *file_from,
					 const char *file_to)
{
	int file_from_fd, file_to_fd, bytes_read;
	char buf[1024];

	file_from_fd = open(file_from, O_RDONLY);
	if (file_from_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				file_from);
		return (98);
	}
	file_to_fd = open(file_to, O_WRONLY | O_CREAT | O_TRUNC,
					  S_IREAD | S_IWUSR | S_IWGRP);
	while ((bytes_read = read(file_from_fd, buf, 1024)) > 0)
	{
		if (file_to_fd == -1 || write(file_to_fd, buf, bytes_read) != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			close_file(file_from_fd);
			close_file(file_to_fd);
			return (99);
		}
	}
	if (bytes_read == -1)
	{
		close_file(file_from_fd);
		close_file(file_to_fd);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				file_from);
		return (98);
	}
	if (close_file(file_from_fd) != 0 || close_file(file_to_fd) != 0)
		return (100);
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
	int res;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	res = cp_between_files(av[1], av[2]);
	if (res != 0)
	{
		exit(res);
	}
	return (0);
}
