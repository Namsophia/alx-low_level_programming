#include "main.h"
/**
 * leet - encodes a string into 1337
 * @str: String to be encoded
 * Return: pointer to the string
 */
char *leet(char *str)
{
	int indx1 = 0, indx2;
	char leet[8] = {'0', 'L', '?', 'E', 'A', '?', '?', 'i'};

	while (str[indx1])
	{
		for (indx2 = 0; indx2 <= 7; indx2++)
		{
			If(str[indx1] == leet[indx2] ||
				str[indx1] - 32 == leet[indx2])
				str[indx1] = indx2 + '0';
		}
		indx1++;
	}
	return (str);
}
