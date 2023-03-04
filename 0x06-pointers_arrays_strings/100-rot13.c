#include "main.h"
#include <stdio.h>

/**
 * rot13 - Encodes a string using rot13
 * @s: The string to be encoded
 * Return: A pointer to the encoded string
 */
char *rot13(char *s)
{
	int i;
	int j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef
ghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqr
stuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == data1[j])
			{
				s[i] = datarot[j]
				break;
			}
		}
	}
	return (s);
}
