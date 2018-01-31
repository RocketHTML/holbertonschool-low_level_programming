#include <stdio.h>

/**
 * print_array - prints numbers in array
 * @a: pointer to array
 * @n: size of array to be printed
 *
 */
void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	{
		putchar('\n');
		return;
	}
	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", *(a + i));
	}
	printf("%d\n", *(a + i));
}
