#include "main.h"
#define BUFFER 1024

int main(int ac, char **av)
{
	ssize_t fd1;
	ssize_t fd2;
	char *buf = malloc(sizeof(char) * BUFFER);
	ssize_t n;

	if (ac != 3) {
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}
	fd1 = open(av[1], O_RDONLY);
	if (fd1 == -1) {
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd2 = open(av[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd2 == -1) {
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	if ((n = read(fd1, buf, BUFFER)) == -1) {
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (write(fd2, buf, n) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);                                                                            
		exit(99);
	}
	while ((n = read(fd1, buf, BUFFER)) > 0) {
		if (write(fd2, buf, n) == -1) {
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	if (n == -1) {
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	
	free(buf);
	if ((close(fd1) == -1)) {
		dprintf(STDERR_FILENO, "Error: Can't close fd %ld\n", fd1);
		exit(100);
	}
	if (close(fd2) == -1) {
		dprintf(STDERR_FILENO, "Error: Can't close fd %ld\n", fd2);
		exit(100);
	}
	return (0);
}
