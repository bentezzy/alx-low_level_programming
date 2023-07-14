#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads and prints text file to stdout
 * @filename:text for reading
 * @letters:number of letters for reading
 *
 * Return: zero for null or (b)
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	ssize_t a;
	ssize_t b;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	a = read(fd, buffer, letters);
	b = write(STDOUT_FILENO, buffer, a);

	free(buffer);
	close(fd);
	return (b);
}
