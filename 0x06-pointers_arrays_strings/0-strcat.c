#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: Pointer to the string to be concatenated upon
 * @src: The source string to be appended to @dest
 * Return: void
 */
char *_strcat(char *dest, const char *src)
{
	int i;
	int j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
