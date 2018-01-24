#include <stdio.h>

/**
 * fib_sum - sums even fib numbers under n
 *
 * @n: the upper limit on the fib values to consider
 *
 */
void fib_sum(long int n)
{
	long int a = 0, b = 1;
	long int c = a + b;
	long int sum = 0;

	while (c <= n)
	{
		a = b;
		b = c;
		c = a + b;
		if (c % 2 == 0 && c <= n)
		{
			sum += c;
		}
	}
	printf("%ld\n", sum);
}

/**
 * main - entry point
 *
 * Return: always returns 0 (success)
 */
int main(void)
{
	fib_sum(4000000);

	return (0);
}
