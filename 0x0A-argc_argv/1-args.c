#include <stdio.h>
#include "main.h"

/**
 * main - program prints number of arguements passed into it
 * @argc: count arguments
 * @argv: arguments
 * Return: Always
 */

int main(int argc, char *argv[])
{
(void) argv; /*ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
