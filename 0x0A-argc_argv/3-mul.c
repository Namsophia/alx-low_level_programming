#include "main.h"
#include <stdio.h>

/**
* main - prints multiplication of two integers
* @argc: argument count
* @argv: argument vector
* Return: if true 0, if false 1
*/
int main(int argc, char *argv[])
{
	int a, b;
	if (argc == 3)
	{
		a = _atoi(argv[1]);
		b = _atoi(argv[2]);
		printf(" % d \n" , a *b);
		return (0);
	}
	printf("error\n");
	return (1);
}
