#include "main.h"
/**
 * puts_half - function that prints half of a string
 * followed by a new line
 * @str: pointer to the string to print
 */

void puts_half(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	str -= (len / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
