#include <stdio.h>

/**
 * fibonacci - recursively finds the nth fibonacci number
 *
 * @n: the index of a number in the fibonacci sequence
 *
 * Return: the nth fibonacci number
 */
long int fibonacci(int n)
{
	long int depth = 3, a = 1, b = 1;
	long int c = a + b;

	printf("%d, ", 1);
	printf("%d, ", 1);
	while (depth <= n)
	{
		a = b;
		b = c;
		c = a + b;
		printf("%ld", c);
		if (depth++ < n)
			printf(", ");
	}
	printf("\n");
	return (c);
}

/**
 * main - entry point
 *
 * Return: always returns 0 (success)
 */
int main(void)
{
	fibonacci(50);
	return (0);
}
