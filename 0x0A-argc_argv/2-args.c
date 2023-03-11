#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: Count arguments
 * @argv: Arguments
 * Return: Always
 */

int main(int argc, char *argv[])
{
	/*Declaring variables*/
	int count = 0;

	if (argc > 0)
	{
		/*while - print each arguments*/
		while (count < argc)
		{
		printf("%s\n", argv[count]);
		count++;
	}
	}
	return (0);
}
