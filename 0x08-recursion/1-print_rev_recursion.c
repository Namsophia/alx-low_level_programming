#include "main.h"

/**
 * _rev_recursion - prints string in reverse
 *
 * @s: string to be printed 0
 */
void _rev_recursion(char *s)
{
	if (*s)
	{
		_rev_recursion(s + 1);
		_putchar(*s);
	}
}
