#include "main.h"

/**
 * append_text_to_file - This function appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 * Return: 1 if the file exists and -1 if the file does not exist
 * or if it fails.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, x, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	x = write(o, text_content, len);

	if (o == -1 || x == -1)
		return (-1);

	close(0);

	return (1);
}
