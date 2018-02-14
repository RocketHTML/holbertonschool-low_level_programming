#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - returns int matrix
 * @width: int
 * @height: int
 * Return: int matrix
 */
int **alloc_grid(int width, int height)
{
	int **mallox;
	int w = width;

	if (width < 1 || height < 1)
		return (0);

	mallox = malloc(height * sizeof(int *));
	if (!mallox)
		return (0);

	for (height = height - 1; height >= 0; height--)
	{
		mallox[height] = malloc(width * sizeof(int));
		printf("width: %d\n", width);
		if (!mallox[height])
			return (0);
		for (width = width - 1; width >= 0; width--)
			mallox[height][width] = 0;
		width = w;
	}

	return (mallox);
}
