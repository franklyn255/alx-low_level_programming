#include "main.h"
#include <stdio.h>

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	fd = open(filename, O_WRONLY | O_APPEND);
	w = write(fd, text_content, O_APPEND);
	if (w == -1 || fd == -1)
		return (-1);
	close (fd);
	return (1);

}
