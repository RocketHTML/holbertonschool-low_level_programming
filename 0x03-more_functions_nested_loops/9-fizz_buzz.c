#include <stdio.h>

/**
 * fizz_buzz - prints from 1 to 100, marking multiples of three and five
 *
 */
void fizz_buzz(void)
{
	int i = 1;
	char fizz[] = {"Fizz"};
	char buzz[] = {"Buzz"};

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("%s%s", fizz, buzz);
		else if (i % 3 == 0)
			printf("%s", fizz);
		else if (i % 5 == 0)
			printf("%s", buzz);
		else
			printf("%d", i);
		if (i++ < 100)
			putchar(' ');
	}
	putchar('\n');
}

/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	fizz_buzz();
	return (0);
}
