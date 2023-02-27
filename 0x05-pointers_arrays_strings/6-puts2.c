#include "main.h"
/**
 * puts - prints every character of a string, starting with the
 * first character
 * @str: pointer to the string to print
 * Return: void
 */

void puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(srt[i]);
		}
		i++;
	}
	_putchar('\n');
}
