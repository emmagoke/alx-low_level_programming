#include "main.h"
#include <string.h>

/**
 * create_file - This function creates a file.
 * @filename: is the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t r;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (text_content)
	{
		r = write(fd, text_content, strlen(text_content));
		if (r == -1)
			return (-1);
	}
	else
		r = write(fd, "", 0);

	close(fd);
	return (1);
}
