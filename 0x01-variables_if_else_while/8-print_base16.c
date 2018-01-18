#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int current = 48;

	while (current < 58)
	{
		putchar(current++);
	}
	current += 39;
	while (current < 103)
	{
		putchar(current++);
	}
	putchar('\n');
	return (0);
}
