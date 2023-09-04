#include "main.h"
/**
 * create_file - file io function
 * @filename: name of file to read
 * @text_content: chars to write
 *
 * writes text to a file
 *
 * Return: 1 on Success,
 * -1 on error
 */
int create_file(const char *filename, char *text_content)
{
	int file;

	if (filename == NULL)
	{
		return (-1);
	}

	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (file == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		write(file, text_content, strlen(text_content));
	}
	close(file);
	return (1);
}
