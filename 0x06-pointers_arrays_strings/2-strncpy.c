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
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
