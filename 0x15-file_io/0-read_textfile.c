#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * read_textfile - Reads a text file
 * @filename: the file to be read
 * @letters: numer of letters to be read
 * Return: the letters read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_open;
	ssize_t read_count, write_count;
	char* buffer

		if (filename, O_RDWR)
			return (0);

	file_open = open(filename, O_RDWR);
	if (file_open == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	read_count = read(file_open, buffer, letters);
	if (read_count == -1)
		return (0);

	write_count = write(STDOUT_FILENO, buffer, read_count);
	if (write_count == -1 || read_count != write_count)
		return (0);
	free(buffer);

	close(file_open);
	return (write_count);
}
