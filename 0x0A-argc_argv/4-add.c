#include "stdio.h"
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _add - program that adds all positive numbers
 * @str: array
 * Return: Always 0
 */

int _add(char *str)
{
	/*Declaring variables*/
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /*count string*/
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}
/**
 * main - print name of the program
 * @argc: count arguments
 * @argv: Arguments
 * Return: Always
 */
int main(int argc, char *argv[])
{
	/*Declaring variables*/
	int count;
	int str_to_int;
	int sum = 0;

	count = 0;
	while (count < argc)
	{
		if (_add(argv[count]))
		{
			str_to_int = atoi(argv[count]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
