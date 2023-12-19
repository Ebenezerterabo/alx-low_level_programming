#include "main.h"

/**
 * create_file - A function that creates a file.
 * @filename: the name of the file to be created
 * @text_content: characters written in the text file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file_dpt;
	int len, len_write;

	if (filename == NULL)
		return (-1);

	file_dpt = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);

	if (file_dpt == -1)
		return (-1);

	if (text_content == NULL)
	{
		text_content = " ";
		close(file_dpt);
	}

	len = strlen(text_content);

	len_write = write(file_dpt, text_content, len);

	if (len_write == -1)
		return (-1);

	close(file_dpt);
	return (1);
}
