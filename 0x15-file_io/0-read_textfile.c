#include "main.h"
/**
 * read_textfile - file io function
 * @filename: name of file to read
 * @letters: number of chars to print
 *
 * reads the content of a file
 *
 * Return: num of read chars
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t count = 0;
	int file, num_of_read_chars, n;
	char *file_contents = malloc(sizeof(char) * (letters + 1));

	if (filename != NULL && file_contents != NULL)
	{
		file = open(filename, O_RDONLY);
		if (file != -1)
		{
			num_of_read_chars = read(file, file_contents, letters);
			file_contents[num_of_read_chars] = '\0';
			n = write(STDOUT_FILENO, file_contents, num_of_read_chars);
			if (n != -1)
			{
				count = num_of_read_chars;
			}
		}
	}

	return (count);
}
