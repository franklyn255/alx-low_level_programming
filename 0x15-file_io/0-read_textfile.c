#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile - reads a text file and print it to
 * the POSIX standard output
 * @filename: text file
 * @letters: number of letters to read and print
 * Return: number of letters read and printed
 * 0 when filename is NULL or function failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fp;
	ssize_t r;
	ssize_t w;
	char *ptr;

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	ptr = malloc(sizeof(char) * letters);
	r = read(fp, ptr, letters);
	w = write(STDOUT_FILENO, ptr, r);
	free(ptr);
	close(fp);
	return (w);
}
