#include "search_algos.h"

/**
 * linear_search - finds value in array using linear search
 * @array: array to search
 * @size: size of array
 * @value: value to find
 * Return: the first index where value is present
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}

	return (-1);
}
