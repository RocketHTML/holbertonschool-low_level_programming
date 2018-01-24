#include <stdio.h>

/**
 * natural_sum - adds two numbers
 *
 */
void natural_sum(void)
{
	int sum = 0, c5 = 5, c3 = 3;

	while (c5 < 1024)
	{
		if (c5 % 3 != 0)
			sum += c5;
		c5 += 5;
	}
	while (c3 < 1024)
	{
		sum += c3;
		c3 += 3;
	}
	printf("%d\n", sum);
}

/**
 * main - entry point
 *
 * Return: always returns 0 (success)
 */
int main(void)
{
	natural_sum();
	return (0);
}
