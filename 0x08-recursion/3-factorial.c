#include "main.h"

/**
 * factorial - returns factorial of a given number
 * @n: The number to find the factorial
 * Return: -1 if n < 0, factorial of n if n => 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
