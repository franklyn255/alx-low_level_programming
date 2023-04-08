#include "main.h"
#include <stdio.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to file
 * @text_content: string added at the end of file
 * Return: 1 on success or -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, len;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	for (len = 0; text_content[len] != '\0';)
		len++;
	fd = open(filename, O_WRONLY | O_APPEND);
	w = write(fd, text_content, len);
	if (w == -1 || fd == -1)
		return (-1);
	close(fd);
	return (1);

}
