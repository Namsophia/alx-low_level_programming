#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to be returned
 * Return: the length
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
