#include "search_algos.h"
/**
 * binary_search - search list for value using binary search
 * @array: array to search
 * @size: size of array
 * @value: value to find
 * Return: index if found, -1 if not
 */
int binary_search(int *array, size_t size, int value)
{
	size_t L = 0;
	size_t R = size - 1;
	size_t m;
	size_t i;
	char *delim;

	if ((L + R) == 0 || array == NULL)
		return (-1);

	while (L <= R)
	{
		m = (L + R) / 2;

		delim = "";
		printf("Searching in array: ");
		for (i = L; i <= R; i++)
		{
			printf("%s%d", delim, array[i]);
			delim = ", ";
		}
		printf("\n");

		if (value > array[m])
			L = m + 1;
		else if (value < array[m])
			R = m - 1;
		else if (value == array[m])
			return (m);
	}
	return (-1);
}
