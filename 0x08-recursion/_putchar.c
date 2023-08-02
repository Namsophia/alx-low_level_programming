#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * Qc: Character to print
 * Return: On Success 1
 * On error, -1 is returned, an d errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
