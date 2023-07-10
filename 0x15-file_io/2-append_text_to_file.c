#include "main.h"
#include <string.h>

/**
 * append_text_to_file - function that appends text at the end of a file
 *
 * @filename: name of the file to append the data
 * @text_content: is the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t bytes_write;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_RDONLY | O_APPEND);

	if (file == -1)
	{
		close(file);
		return (-1);
	}

	if (text_content != NULL)
	{
		bytes_write = write(file, text_content, strlen(text_content));

		if (bytes_write == -1)
		{
			close(file);
			return (-1);
		}
	}

	close(file);
	return (1);
}
