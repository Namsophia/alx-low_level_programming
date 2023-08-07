#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: Input one to concat
 * @s2: Input two to concat
 * return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int i = j = len1 = len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	s3 = malloc(sizeof(char) * (len1 + len2 + 1));
	if (s3 == NULL)
		return (NULL);
	i = 0;
	j = 0;

	if (s1)
	{
		while (i < len1)
		{
			s3[i] = s1[i];
			i++;
		}
	}
	if (s2)
	{
		while (i < (len1 + len2))
		{
			s3[i] = s2[j];
			i++;
			j++;
		}
	}
	s3[i] = '\0';
	return (s3);
}
