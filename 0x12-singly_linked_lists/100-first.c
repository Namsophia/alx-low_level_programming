#include <stdio.h>

void first(void)_attribute_((constructor));

/**
 * first - prints sentence before main
 * function will be executed
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
