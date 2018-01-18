#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int letter = 0;

	while (letter < 26)
	{
		putchar('z' - letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
