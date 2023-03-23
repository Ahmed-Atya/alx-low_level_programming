#include <stdio.h>

/**
 * main - prime numbers
 *
 * Return: Always 0.
 */

int main(void)
{
	long int x = 612852475143;
	long int pfact;

	for ( pfact = 2;  pfact < x;  pfact++)
	{
		if (x %  pfact == 0)
		{
			x = x /  pfact;
		}
	}
	printf("%ld\n",  pfact);
	return (0);
}
