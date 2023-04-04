#include "main.h"

/**
 * checkprime - check if n is a prime number
 * Description: funtion that returns 1 if the input integer is a prime number
 * @counter: input integer
 * @n: input integer
 * Return: input value
 */

int checkprime(int n, int counter)
{
	if (n % counter == 0)
	{
		return (0);
	}
	if (counter == (n / 2))
	{
		return (1);
	}
	return (checkprime(n, counter + 1));
}


/**
 * is_prime_number - check if n is a prime number
 * Description: funtion that returns a prime number
 * @n: input integer
 * Return: input value
 */

int is_prime_number(int n)
{
	int counter = 2;


	if (n >= 2 && n <= 3)
	{
		/* returning 1 if n = 3*/
		return (1);

	}

	if (n <= 1)
		return (0);
	return (checkprime(n, counter));
}
