#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: Points to name of the file to create.
 * @text_content: Points to the string to write to the file.
 *
 * Return: fail - -1.
 * Otherwise - 1.
 */

int create_file(const char *filename, char *text_content)

{
	int lenghth = 0;
	int fd;
	int w;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lenghth = 0; text_content[lenghth];)
			lenghth++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, lenghth);
	if (fd == -1 || w == -1)
		return (-1);

	close(fd);
	return (1);
}
