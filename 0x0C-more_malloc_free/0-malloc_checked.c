#include <stdlib.h>

/**
 * malloc_checked - function which allocates a memory
 * @b: size of memeory to be allocated
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
