#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: pointer to file
 * @text_content: pointer to a string to write to th file
 * Return: 1 on success or -1 if function fails
 */

int create_file(const char *filename, char *text_content)
{
        int w, fd, len;

        if (filename == NULL)
                return (-1);

        if (text_content != NULL)
        {
                len = 0;
                while (text_content[len])
                        len++;
        }

        fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0666);
        w = write(fd, text_content, len);

        if (fd == -1 || w == -1)
                return (-1);
        close(fd);
        return (1);
}
