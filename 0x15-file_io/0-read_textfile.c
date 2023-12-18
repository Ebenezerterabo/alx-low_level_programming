#include "main.h"

/**
 * read_textfile - A function that reads a text file and prints
 * it to the POSIX standard output.
 * @filename: the name of the text file
 * @letters: number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_dpt;
	char *buffer;
	ssize_t len_read, len_write;

	if (filename == NULL)
		return (0);

	file_dpt = open(filename, O_RDONLY);

	if (file_dpt == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	len_read = read(file_dpt, buffer, letters);

	if (len_read == -1)
		return (0);

	len_write = write(STDOUT_FILENO, buffer, len_read);

	if (len_read != len_write || len_write == -1)
		return (0);

	free(buffer);
	close(file_dpt);

	return (len_read);
}
