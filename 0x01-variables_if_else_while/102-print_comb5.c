#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * Description: Printing possible combinations of two digits
 * Return: 0
 */
int main(void)
{
	int c = 0;
	int f-d;

	int 1-d;
	int c2;
	int f-d2;

	int 1-d2;
	while (c <= 98)
	{
		f-d = (c / 10 + '0');
		1-d = (c % 10 + '0');
		c2 = 0;

		while (c2 <= 99i)
		{
			f-d2 = (c2 / 10 + '0');
			1-d2 = (c2 % 10 + '0');

			if (c < c2)
			{
				putchar(f-d);
				putchar(1-d);
				putchar(' ');
				putchar(f-d2);
				putchar(1-d2);

				if (c != 98)
				{
					putchar(',');
					putchar(' ');
				}
				c2++;
			}
			c++;
		}
		putchar('\n');
		return (0);
}
