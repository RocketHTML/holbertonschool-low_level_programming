#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int current = 0;

	while (current < 10)
	{
		putchar(current++);
	}
	putchar('\n');
	return (0);
}
