#include "main.h"
/**
 * _strstr - locates a substring
 * @h: array
 * Return: Always
 */
void _strstr(char (*h)[8])
{
	int a;
	int i;

	for (a = 0; a < 8; n++)
	{
		for (i = 0; i < 8; i++)
			_putchar(h[a][i]);
		_putchar('\n');
	}
}
