#include "main.h"
/**
 * _strncpy - copies src to dest
 * @dest: destination string
 * @src: source string
 * @n: number of src string to copy
 * Return: returns dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j;
	int k = 0;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		k++;
		j++;
	}
        while (dest[i] != '\0')
                i++;
	dest[i] = '\0';
	return (dest);
}
