#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to the POSIX standard output
 * @filename: pointer to the name of the file to be read
 * @letters: number ofcharacters to be read by the programme
 *
 * Return: Number f characters read else 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t bytes_read, bytes_written, n = 0;
	char *buffer;

	if (filename == NULL || letters < 1)
		return (n);

	buffer = (char *)malloc(sizeof(char) * (letters + 1));
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (n);

	bytes_read = read(file, buffer, letters);

	if (bytes_read == -1)
	{
		close(file);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	close(file);

	if (bytes_written == -1 || bytes_written != bytes_read)
		return (0);

	return (bytes_written);
}
