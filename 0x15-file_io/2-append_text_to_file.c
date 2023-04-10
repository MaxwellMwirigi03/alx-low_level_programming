#include "main.h"

/**
 * append_text_to_file - Appends text at end of a file.
 * @filename: Points to name of the file.
 * @text_content: String added at the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 * If the file does not exist the user lacks write permissions - (-1).
 * Otherwise - 1.
 */

int append_text_to_file(const char *filename, char *text_content)

{
	int fo;
	int w;
	int lenghth = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lenghth = 0; text_content[lenghth];)
			lenghth++;
	}

	fo = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (fo == -1 || w == -1)
		return (-1);

	close(fo);

	return (1);
}
