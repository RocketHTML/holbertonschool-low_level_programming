#include "holberton.h"

/**
 * main - entry point
 *
 * Returns - exit code
 */
int main(void)
{
	char holbie[9] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n'};
	char *cp = holbie;

	for (; cp < holbie + 9 ; cp++)
	{
		_putchar(*cp);
	}
	putchar('\n');
	return (0);
}
