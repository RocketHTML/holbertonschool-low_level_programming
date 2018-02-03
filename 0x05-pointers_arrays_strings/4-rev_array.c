#include <stdio.h>

/**
 * reverse_array - reverses an array of integers
 * @a: pointer to array
 * @n: size of array
 */
void reverse_array(int *a, int n)
{
	int i;
	int u;
	int j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		u = *(a + i);
		*(a + i) = *(a + j);
		*(a + j) = u;
		j--;
	}
}
