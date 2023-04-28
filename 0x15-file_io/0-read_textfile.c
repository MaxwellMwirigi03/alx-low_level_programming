#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 * 0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)

{
	char *buffer = malloc(letters + 1);
	int fd, w, fr;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0 || !buffer)
	{
		close(fd);
		return (0);
	}
	fr = read(fd, buffer, letters);
	close(fd);
	w = write(STDOUT_FILENO, buffer, fr);
	if (w != fr || w == -1 || fr == -1)
		return (0);
	else
		return (fr);
}
