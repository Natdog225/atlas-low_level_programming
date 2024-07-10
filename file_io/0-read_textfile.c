#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read, bytes_written;
	char *buffer;

	/* Handle NULL filename or zero letters */
	if (filename == NULL || letters == 0)
		return 0;

	/* Open the file for reading */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return 0;

	/* Allocate buffer */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return 0;
	}

	/* Read from the file into the buffer */
	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(fd);
		return 0;
	}

	/* Write to standard output */
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written != bytes_read)
	{
		free(buffer);
		close(fd);
		return 0;
	}

	free(buffer);
	close(fd);
	return bytes_written;
}
