#include "main.h"

int square_root(int n_one, int root);

/**
 * _sqrt_recursion - Returns natural square root of a number
 * @n: number
 *
 * Return: Root
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (square_root(n, root));
}

/**
 * square_root - finds the natural square root of an input number
 * @n_one: Base number
 * @root: The root to be tested
 * Return: square root
 */
int square_root(int none, int root)
{
	/* Base case */
	if ((root * root) == n_one)
		return (root);
	/* Base Case*/
	if (root == n_one / 2)
		return (-1);
	return (square_root(n_one, root + 1));
}
