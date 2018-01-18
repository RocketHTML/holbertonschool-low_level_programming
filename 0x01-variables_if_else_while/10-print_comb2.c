#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int right = 48;
	int left = 48;

	while (left < 58)
	{
		while (right < 58)
		{
			putchar(right++);
			putchar(left);
			if (right == 58)
			{
				left++;
			}
			if (left < 58)
			{
				putchar(44);
				putchar(32);
			}
		}
		right = 48;
	}
	putchar('\n');
	return (0);
}
