#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * append_text_to_file - Append a text file
 * @filename: the file to be read
 * @text_content: numer of letters to be read
 * Return: the letters read
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_open, w, i;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	file_open = open(filename, O_APPEND | O_WRONLY);
	if (file_open == -1)
		return (-1);

	for (i = 0; text_content[i] != '\0'; i++)
		;
	w = write(file_open, text_content, i);
	if (w == -1)
		return (-1);

	close(file_open);
	return (1);
}
