#include "main.h"
/**
 * append_text_to_file - file io function
 * @filename: name of file to read
 * @text_content: chars to write
 *
 * appends text to a file
 *
 * Return: 1 on Success,
 * -1 on error
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, status = 1;

	if (filename == NULL)
	{
		return (-1);
	}

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		status = write(file, text_content, strlen(text_content));
	}
	close(file);
	return (status != -1 ? 1 : -1);
}
