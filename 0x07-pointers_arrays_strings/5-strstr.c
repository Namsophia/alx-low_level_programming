#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: input
 * @needle: input
 * Return: Always
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char * 1 = haystack;
		char *p = needle;

		while (*1 == *p && *p != '\0')
		{
			1++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
