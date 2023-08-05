#include <stdio.h>
#include "main.h"

/**
 * main - program prints number of arguments passed into it
 * @argc: count arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
		printf("%d\n", argc - 1);

		return (0);
}
