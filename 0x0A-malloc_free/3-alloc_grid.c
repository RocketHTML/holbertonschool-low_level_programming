#include <stdlib.h>
/**
 * alloc_grid - returns int matrix
 * @width: int
 * @height: int
 * Return: int matrix
 */
int **alloc_grid(int width, int height)
{
	int **mallox;
	int w;

	if (width < 1 || height < 1)
		return (0);

	mallox = malloc(height * sizeof(int *));
	if (!mallox)
		return (0);

	for (--height; height >= 0; height--)
	{
		mallox[height] = malloc(width * sizeof(int));
		if (!mallox[height])
			return (0);
		for (w = width - 1; w >= 0; w--)
			mallox[height][w] = 0;
	}

	return (mallox);
}
