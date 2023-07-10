#include "main.h"
#include <string.h>

/**
 * create_file - function that creates a file
 *
 * @filename: name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure (file can not be created,
 *		file can not be written, write “fails”, etc…)
 */

int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t bytes_write;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

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
