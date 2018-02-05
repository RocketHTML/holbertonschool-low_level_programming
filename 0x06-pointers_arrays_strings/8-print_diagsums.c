#include <stdio.h>

/**
 * print_diagsums - prints the sum of each diagnol of a matrix
 * @a: pointer to matrix
 * @size: width and height of matrix
 */
void print_diagsums(int *a, int size)
{
	int i;
	int c;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		c = i * size;
		sum1 += *(a + (c + i));
		sum2 += *(a + (c + size - 1 - i));
	}
	printf("%d, %d\n", sum1, sum2);
}
