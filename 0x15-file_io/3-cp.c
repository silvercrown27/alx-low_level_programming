#include "main.h"
#include <string.h>

/**
 * print_error_and_exit - function that dispays errors
 *	encountered on the code to STDERR_FILENO
 *
 * @message: text message
 * @exit_code: error exit code
 *
 * Return: No value
 */
void print_error_and_exit(const char *message, int exit_code)
{
	dprintf(2, "%s\n", message);
	exit(exit_code);
}

/**
 * write_error - function that writes the error message
 *
 * @message: Error message
 * @filename: file name raising the error
 * @exit_code: the exit code of the error
 *
 * Return: No value
 */
void write_error(char *message, const char *filename, int exit_code)
{
	char *error;

	error = (char *)malloc(sizeof(char) * strlen(strcat(message, filename)));
	error = strcat(message, filename);

	print_error_and_exit(error, exit_code);

}

/**
 * close_file - program tha  Closes file descriptors.
 * @fd: file descriptor to be closed.
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - function that copies a file
 *
 * @argc: number of arguments received
 * @argv: arguments
 *
 * Return: 0 if successful run
 */
int main(int argc, char *argv[])
{
	const char *file_from, *file_to;
	ssize_t bytes_read, bytes_write;
	int source_fd, file_dest;
	char *buffer;

	if (argc != 3)
		print_error_and_exit("Usage: cp file_from file_to", 97);

	file_from = argv[1];
	file_to = argv[2];

	source_fd = open(file_from, O_RDONLY);
	if (source_fd == -1)
		write_error("Error: Can't read from file ", file_from, 98);

	file_dest = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_dest == -1)
		write_error("Error: Can't write to ", file_to, 99);

	buffer = (char *)malloc(sizeof(char) * BUFFER_SIZE);
	while ((bytes_read = read(source_fd, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_write = write(file_dest, buffer, bytes_read);
		if (bytes_write == -1)
			print_error_and_exit(file_to, 98);
	}

	if (bytes_read == -1)
		print_error_and_exit(file_from, 98);

	free(buffer);
	close_file(file_dest);
	close_file(source_fd);

	return (0);
}
