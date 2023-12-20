#include "main.h"

/**
 * copyFile - A function that copies the content of a file
 * to another file.
 * @file_from: the source file
 * @file_to: the destination file
 *
 * Return: an integer
 */

int copyFile(const char *file_from, const char *file_to)
{
	int len_read, len_write, src_fd, dest_fd;
	char buffer[BUFSIZE];

	src_fd = open(file_from, O_RDONLY);
	if (src_fd == -1)
		return (98);

	dest_fd = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (dest_fd == -1)
		return (99);

	while (1)
	{
		len_read = read(src_fd, buffer, BUFSIZE);
		if (len_read == -1)
			return (98);
		if (!len_read)
			break;

		len_write = write(dest_fd, buffer, len_read);
		if (len_write == -1)
			return (99);
	}

	if (close(src_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d/n", src_fd);
		exit(100);
	}
	else if (close(dest_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d/n", dest_fd);
		exit(100);
	}

	return (0);
}

/**
 * main - Entry point of program
 * @ac: the number of argument passed to the main
 * @av: argument vector
 *
 * Return: Nothing
 */

int main(int ac, char **av)
{
	int copy_content;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}

	copy_content = copyFile(av[1], av[2]);

	if (copy_content == 98)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", av[1]);
		return (98);
	}
	else if (copy_content == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		return (99);
	}

	return (0);
}
