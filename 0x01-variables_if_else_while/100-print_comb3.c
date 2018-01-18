#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int right_base = 48;
	int left = 48;
	int iteration = 1;
	int right = right_base;

	while (left < 57)
	{
		right = right_base + iteration++;
		while (right < 58)
		{
			putchar(left);
			putchar(right++);
			if (right >= 58)
			{
				left++;
			}
			if (left < 57)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
