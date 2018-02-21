#include <stddef.h>
/**
 * array_iterator - returns void
 * @array: int array
 * @size: size_t
 * @action: void function takes int
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || size == 0 || !action)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
