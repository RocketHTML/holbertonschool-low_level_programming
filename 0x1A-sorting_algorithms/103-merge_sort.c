#include "sort.h"

/**
 * print_range - prints numbers from an array
 * @b: pointer to array
 * @i: starting index
 * @j: final index
 */
void print_range(int *b, int i, int j)
{
	int comma = 0;

	for (; i <= j; i++)
	{
		if (comma)
			printf(", ");
		comma = 1;
		printf("%d", b[i]);
	}
}

/**
 * ms - recursive merge sort
 * @a: pointer to array to sort
 * @b: pointer to helper array
 * @i: offset from a
 * @j: offset from a
 */
void ms(int *a, int *b, int i, int j)
{
	int mid = (j - i + 1) / 2;
	int x;
	int left = i;
	int right = i + mid;
	int leftend = right;
	int rightend = j + 1;

	if (i == j)
		return;

	ms(a, b, left, right - 1);
	ms(a, b, right, rightend - 1);
	printf("Merging...\n[left]: ");
	print_range(a, left, leftend - 1);
	printf("\n[right]: ");
	print_range(a, right, rightend - 1);
	printf("\n");

	for (x = i; x <= j; x++)
	{
		if (right == rightend ||
			((left != leftend) && a[left] < a[right]))
		{
			b[x] = a[left++];
		}
		else
		{
			b[x] = a[right++];
		}
	}

	for (x = i; x <= j; x++)
		a[x] = b[x];

	printf("[Done]: ");
	print_range(a, i, j);
	printf("\n");
}

/**
 * merge_sort - sorts array in log(n) time
 * @array: pointer to array to sort
 * @size: size of array
 */
void merge_sort(int *array, size_t size)
{

	int *b;

	if (array == NULL || size <= 1)
		return;

	b = malloc(sizeof(int) * size);
	if (b == NULL)
		return;
	ms(array, b, 0, size - 1);
	free(b);
}
