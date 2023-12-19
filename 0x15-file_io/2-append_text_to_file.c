#include "main.h"

/**
 * append_text_to_file - A function that appends text at the
 * of a file.
 * @filename: the name of the file
 * @text_content: is the conetent of the file
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int len, len_write, file_dpt;

	if (filename == NULL)
		return (-1);

	file_dpt = open(filename, O_APPEND | O_RDWR);

	if (file_dpt == -1)
		return (-1);

	if (!text_content)
		return (1);

	len = strlen(text_content);

	len_write = write(file_dpt, text_content, len);

	if (len_write == -1)
		return (-1);

	close(file_dpt);
	return (1);
}
