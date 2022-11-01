#include "main.h"

/**
 * read_textfile - Tis function reads a text file and prints it
 * to the POSIX standard output.
 * @filename: The name of the file to be read.
 * @letters: is the number of letters it should read and print.
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf = malloc(sizeof(char) * letters);
	ssize_t fd, r, len;

	if (filename == NULL)
		return (0);

	if (buf == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	r = read(fd, buf, letters);
	if (r == -1)
		return (0);
	len = write(STDOUT_FILENO, buf, r);
	if (len != r || len == -1)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(fd);
	return (len);
}
