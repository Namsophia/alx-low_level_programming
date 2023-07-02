#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *aaa;
	int i, len;

	i = len = 0;

	if (str == NULL)
		return (NULL);
	while (str[i])
	{
		len++;
		i++;
	}
	aaa = malloc(sizeof(char) * (len + 1));

	if (aaa == NULL)
		return (NUll);
	for (i = 0; str[i]; i++)
		aaa[i] = str[i];
	return (aaa);
}
