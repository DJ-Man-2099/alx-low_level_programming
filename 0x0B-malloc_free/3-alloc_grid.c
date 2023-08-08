#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - array function
 * @width: dimension
 * @height: dimension
 *
 * creates a 2d array
 *
 * Return: pointer to array,
 * Null at error
 */
int **alloc_grid(int width, int height)
{
	int **array, i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	array = (int **)malloc(width * sizeof(int) * height);
	for (i = 0; i < width; i++)
	{
		array[i] = (int *)malloc(width * sizeof(int));
	}

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}

	return (array);
}
