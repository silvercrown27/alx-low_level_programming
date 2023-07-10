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
	dprintf(2, "Error: %s\n", message);
	exit(exit_code);
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
		print_error_and_exit(file_from, 98);

	file_dest = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_dest == -1)
		print_error_and_exit(file_to, 99);

	buffer = (char *)malloc(sizeof(char) * BUFFER_SIZE);
	while ((bytes_read = read(source_fd, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_write = write(file_dest, buffer, bytes_read);
		if (bytes_write == -1)
			print_error_and_exit(file_to, 98);
	}

	if (bytes_read == -1)
		print_error_and_exit(file_from, 98);

	if (close(file_dest == -1))
		print_error_and_exit("Can't close dest_fd", 100);

	if (close(source_fd == -1))
		print_error_and_exit("Can't close fd", 100);
	
	free(buffer);
	return (0);
}