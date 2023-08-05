#include <stdio.h>
#include "main.h"

/**
 * main - prints name of a program followed by  new line
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0
 */
int main(int argc _attribute_((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
