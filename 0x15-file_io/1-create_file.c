#include "main.h"

/**
 * create_file - This creates a file
 * @filename: The filename.
 * @text_content: The content written in the file.
 * Return: 1 if it is success and -1 if it fails.
 */

int create_file(const char *filename, char *text_content)

{
	int fd, x, len = 0;

	if (!filename)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	x = write(fd, text_content, len);

	if (fd == -1 || x == -1)
		return (-1);

	close(fd);

	return (1);
}
