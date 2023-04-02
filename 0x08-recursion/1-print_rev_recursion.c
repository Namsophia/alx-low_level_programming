#include "main.h"

/**
 * _rev_recursion - prints string in reverse
 *
 * @s: string to be printed 0
 * Return: void
 *
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
