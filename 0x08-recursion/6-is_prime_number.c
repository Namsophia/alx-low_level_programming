#include "main.h"

/**
 * is_prime_number - check if n is a prime number
 * Description: funtion that returns 1 if the input integer is a prime number
 * @n: input integer
 * Return: input value
 */
int checkprime(int n, int counter)
{
	if (n % counter == 0)
	{
		return (0);
	}
	if (counter > (n / 2))
	{
		return (1);
	}
	return (checkprime(n, counter + 1));
}
int is_prime_number(int n)
		int (counter = 3);

		if (n <= 1)
			return (0);
		return (checkprime(5, 2));
}
