#include "main.h"

/**
 * _rev_recursion - prints string in reverse
 *
 * @c: string to be printed 0
 */
void _rev_recursion(char *c)
{
	if (*c)
	{
		_rev_recursion(c + 1);
		printf(*c);
	}
}
