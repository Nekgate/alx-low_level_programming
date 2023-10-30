#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - This function read text file and prints to standout
 * @filename: The name of file to read
 * @letters: The number of letters it should read and print
 * Return: The number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd, x, y;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	y = read(fd, buf, letters);
	x = write(STDOUT_FILENO, buf, y);

	free(buf);
	close(fd);
	return (x);
}
