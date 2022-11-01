#include "main.h"

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
