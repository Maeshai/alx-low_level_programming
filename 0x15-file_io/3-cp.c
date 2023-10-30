#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

#define BUFFER_SIZE 1024

/**
 * print_usage_and_exit - Print usage message and exit with code 97.
 */
void print_usage_and_exit(void)
{
	dprintf(2, "Usage: cp file_from file_to\n");
	exit(97);
}

/**
 * print_error_and_exit - Print error message and exit with the given code.
 * @message: The error message to print.
 * @exit_code: The exit code to use.
 */
void print_error_and_exit(const char *message, int exit_code)
{
	dprintf(2, "%s\n", message);
	exit(exit_code);
}

/**
 * close_files_and_exit - Close file descriptors and exit with the given code.
 * @fd_from: The source file descriptor.
 * @fd_to: The destination file descriptor.
 * @exit_code: The exit code to use.
 */
void close_files_and_exit(int fd_from, int fd_to, int exit_code)
{
	close(fd_from);
	close(fd_to);
	exit(exit_code);
}

int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		print_usage_and_exit();

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		print_error_and_exit("Error: Can't read from file", 98);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		print_error_and_exit("Error: Can't write to file", 99);

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
			close_files_and_exit(fd_from, fd_to, 99);
	}

	if (bytes_read == -1)
		close_files_and_exit(fd_from, fd_to, 98);

	if (close(fd_from) == -1 || close(fd_to) == -1)
		print_error_and_exit("Error: Can't close fd", 100);

	chmod(argv[2], S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

	return (0);
}
