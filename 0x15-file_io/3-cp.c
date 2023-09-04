#include "main.h"
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
	int file_from_fd, file_to_fd, bytes_read, write_status;
	char buf[1024];

	file_from_fd = open(file_from, O_RDONLY);
	if (file_from_fd == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n",
				file_from);
		return (98);
	}
	file_to_fd = open(file_to, O_WRONLY | O_CREAT | O_TRUNC,
					  S_IREAD | S_IWUSR | S_IWGRP);
	if (file_to_fd == -1)
	{
		fprintf(stderr, "Error: Can't write to %s\n", file_to);
		return (99);
	}
	while ((bytes_read = read(file_from_fd, buf, 1024)) > 0)
	{
		write_status = dprintf(file_to_fd, "%s", buf);
	}
	if (close(file_from_fd) == -1)
	{
		fprintf(stderr, "Error: Can't close fd %d\n",
				file_from_fd);
		return (100);
	}
	if (close(file_to_fd) == -1)
	{
		fprintf(stderr, "Error: Can't close fd %d\n",
				file_to_fd);
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
	int res;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (av[1] == NULL || av[2] == NULL)
	{
		return (-1);
	}
	res = cp_between_files(av[1], av[2]);
	if (res != 0)
	{
		exit(res);
	}
	return (0);
}
