#include "stdio.h"
#include "0x03-more_functions_nested_loops/holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int N = 612852475143;
	unsigned long int n = N;
	unsigned long int d;
	unsigned long int lp = 0;

	for (d = 2; d < n/2; d++)
	{
		if (n % d == 0)
		{
			n = n / d;
			if (d > lp)
				lp = d;
			d = 1;
		}
	}
	if (n > lp)
		lp = n;

	printf("N: %lu\nLargest Prime: %lu\n", N, lp);
	return (0);
}
