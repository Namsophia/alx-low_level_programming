#include "main.h"
/**
 * _strpbrk - searches a string for any of a set bytes
 * @s: input
 * @accept: input
 * Return: Always 0
 */
char *_strpbrk(char *s, char *accept)
{
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
		if (*s == accept[r])
		return (s);
		}
	s++;
	}
	return ('\0');
}
