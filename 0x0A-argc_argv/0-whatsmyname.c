#include <stdio.h>
#include "main.h"

/**
 * main - prints name of a program followed by new line
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
