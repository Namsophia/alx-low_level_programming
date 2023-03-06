#include "main.h"
/**
 * print_chessboard - function that prints a chessboard
 * @a: array
 * Return: Always
 */
void print_chessboard(char (*a)[8])
{
	int h;
	int i;

	for (h = 0; h < 8; h++)
	{
		for (i = 0; i < 8; i++)
			_putchar(a[h][i]);
		_putchar('\n');
	}
}
