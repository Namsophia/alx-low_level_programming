#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: count arguments
 * @argv: arguments
 * Return: always
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
			print("%s\n", argv[count]);
			count++;
		}
	}
	return (0);
}
