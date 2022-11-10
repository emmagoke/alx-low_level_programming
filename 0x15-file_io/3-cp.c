#include "main.h"
#define BUFFER 1024

/**
 * print_rd - Prints the error message when
 * file can't be read from a file.
 * @str: The name of the file that can't be read.
 * Return: Nothing.
 */
void print_rd(char *str)
{
	dprintf(2, "Error: Can't read from file %s\n", str);
	exit(98);
}

/**
 * print_wr - Prints the error message when
 * we can't write to a file.
 * @str: The name of the file that can't be written to.
 * Return: Nothing.
 */
void print_wr(char *str)
{
	dprintf(2, "Error: Can't write to %s\n", str);
	exit(99);
}
/**
 * main - copies the content of a file to another file.
 * @ac: The number command line argument
 * @av: A string array of the command line argument.
 * Return: 0 or -1.
 */
int main(int ac, char **av)
{
	ssize_t fd1, fd2, n;
	char *buf = malloc(sizeof(char) * BUFFER);

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(av[1], O_RDONLY);
	if (fd1 == -1)
		print_rd(av[1]);
	fd2 = open(av[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd2 == -1)
		print_wr(av[2]);
	while ((n = read(fd1, buf, BUFFER)) > 0)
	{
		if (write(fd2, buf, n) == -1)
		{
			print_wr(av[2]);
		}
	}
	if (n == -1)
		print_rd(av[2]);
	free(buf);
	if ((close(fd1) == -1))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %ld\n", fd1);
		exit(100);
	}
	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %ld\n", fd2);
		exit(100);
	}
	return (0);
}
