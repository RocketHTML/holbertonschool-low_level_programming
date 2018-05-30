#include "sort.h"

/**
 * finalarray - final phase of count sort
 * @array: array to sort
 * @newarray: array of ranges
 * @size: size of array
 */
void finalarray(int *array, int *newarray, size_t size)
{
	int *finalarray;
	unsigned int i;
	unsigned int j;
	unsigned int value;

	finalarray = malloc(sizeof(int) * size);
	if (finalarray == NULL)
		return;


	for (i = 0; i < size; i++)
	{
		j = array[i];
		value = newarray[j];
		finalarray[value] = j;
		value++;
		newarray[j] = value;
	}
	/*set finalarray to newarray */
	for (i = 0; i < size; i++)
	{
		array[i] = finalarray[i];
	}
}

/**
 * shiftarray - shift rolling sums so that it holds index starts
 * @newarray: array of index starts
 * @newsize: size of newarray
 */
void shiftarray(int *newarray, int newsize)
{
	int i = newsize - 1;

	while (i > 0)
	{
		newarray[i] = newarray[i - 1];
		i--;
	}
	newarray[0] = 0;

}

/**
 * addarray - turn ranges into rolling sums
 * @newarray: array to hold rolling sums
 * @newsize: size of newarray
 */
void addarray(int *newarray, int newsize)
{
	int i = 0;
	int add = 0;

	while (i < newsize)
	{
		add += newarray[i];
		newarray[i] = add;
		i++;
	}
	print_array(newarray, newsize);
}


/**
 * countarray - increments newarray to hold ranges
 * @array: array to count
 * @newarray: array of ranges
 */
void countarray(int *array, int *newarray)
{
	unsigned int i = 0;
	unsigned int j = 0;


	while (array[i] != '\0')
	{
		j = array[i];
		newarray[j] += 1;
		i++;
	}
}

/**
 * counting_sort - uses count of occurances of elements to sort
 * @array: array to sort
 * @size: size of the array
 */
void counting_sort(int *array, size_t size)
{
	int i = 0;
	int newsize;
	int *newarray;


	newsize = array[0];

	/* finds size of new array */
	while (array[i] != '\0')
	{
		if (array[i] > newsize)
		newsize = array[i];

		i++;
	}
	newsize += 1;
	newarray = malloc(sizeof(int) * newsize + 1);
	if (newarray == NULL)
		return;

	/* initalize array elements to 0 */
	for (i = 0; i < newsize; i++)
	{
		newarray[i] = 0;
	}
	newarray[i] = '\0';

	countarray(array, newarray);
	addarray(newarray, newsize);
	shiftarray(newarray, newsize);
	finalarray(array, newarray, size);
}
