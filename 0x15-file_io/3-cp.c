#include <stdlib.h>
#include <stdio.h>
#include "main.h"

char *buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - allocates 1024 bytes for a buffer
 * @file: name of file
 * Return: a pointer to the newly allocated buffer
 */

char *create_buffer(char *file)
{
	char *buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", file);
		exit(99);
	}
	return (buf);
}

/**
 * close_file - close file descriptors
 * @fd: file descriptor
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main: copies the content to another file
 * @argc: The number of arguments
 * @argv: array of pointers to the argument
 *
 * Description: if file_to cannot be created or written to - exit 99
 * if the argument cout is incorrect - exit code 97
 * if file_from does not exist - exit code 98
 * if file_from or file_to cannot be closed - exit 100
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int from, to, wr, re;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "usuage : cp file_from file_to\n");
		exit(97);
	}

	buf = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	re = read(from, buf, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || re == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}

		wr = write(to, buf, re);
		if (to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
			free(buf);
			exit(98);
		}

		re = read(from, buf, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (re > 0);

	free(buf);
	close(from);
	close(to);

	return (0);
}




































