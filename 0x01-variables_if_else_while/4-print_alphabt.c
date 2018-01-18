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
		if (('a' + letter) != 'q' && ('a' + letter) != 'e')
			putchar('a' + letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
