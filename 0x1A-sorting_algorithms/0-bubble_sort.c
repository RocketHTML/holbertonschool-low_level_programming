#include "sort.h"

/**
 * bubble_sort - sorts bubbles
 * @array: pointer to array
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t j = 0;
	size_t i = 0;
	int hold;
	int hold2;
	int flag = 0;

	if (!array)
		return;

	for (j = size - 1; j > 0; j--)
	{
		for (i = 0; i < j; i++)
		{
			if (array[i] > array[i + 1])
			{
				flag = 1;
				hold = array[i];
				hold2 = array[i + 1];
				array[i] = hold2;
				array[i + 1] = hold;
				print_array(array, size);
			}
		}
		if (flag == 0)
			break;
		flag = 0;
	}
}
