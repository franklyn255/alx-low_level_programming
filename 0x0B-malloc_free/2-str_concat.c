#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, r;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i] != '\0')
		i++;
	r = 0;
	while (s2[r] != '\0')
		r++;
	ptr = malloc(sizeof(char) * (i + r + 1));
	i = r = 0;
	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (r = 0; s2[r] != '\0'; r++)
	{
		ptr[i] = s2[r];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
