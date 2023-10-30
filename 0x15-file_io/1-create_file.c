#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - Creates a file and writes text to it
 * @filename: The name of the file to create
 * @text_content: The text to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0, write_len;

	if (filename == NULL)
		return (-1);

	/* Open the file with read and write permissions */
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	/* Check if text_content is not NULL */
	if (text_content != NULL)
	{
		/* Calculate the length of the text_content */
		while (text_content[len])
			len++;

		/* Write text_content to the file */
		write_len = write(fd, text_content, len);
		if (write_len != len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
