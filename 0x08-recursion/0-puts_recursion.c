#include "main.h"
/**
 * _puts-recursion - function that prints a string followed by new line
 * @s: String to be printed
 */

void _puts-recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts-recursion(s + 1);
	{
	else
		_putchar('\n');
}
