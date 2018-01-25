#include <stdio.h>

/**
 * fib98 - finds the nth fibonacci number (which will be 98 in this case)
 *
 * @n: the index of a number in the fibonacci sequence
 *
 * Return: the nth fibonacci number
 */
void fib98(int n)
{
	int depth = 2;
	unsigned long int a = 0, b = 1;
	unsigned long int c = a + b;

	printf("%d, ", 1);
	while (depth <= n)
	{
		a = b;
		b = c;
		c = a + b;
		printf("%lu", c);
		if (depth++ < n)
			printf(", ");
	}
	printf("\n");
}

/**
 * main - entry point
 *
 * Return: always returns 0 (success)
 */
int main(void)
{
	fib98(98);
	return (0);
}
