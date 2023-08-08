#include <stdlib.h>
#include "main.h"
/**
 * free_grid_temp - array function
 * @grid: array to free
 * @height: dimension
 *
 * frees a 2d array
 *
 * Return: void
 */
void free_grid_temp(int **grid, int height)
{
	int i;

	for (i = height - 1; i >= 0; i--)
	{

		free(grid[i]);
	}
	free(grid);
}
/**
 * allocate_2d - array function
 * @width: dimension
 * @height: dimension
 *
 * creates a 2d array
 *
 * Return: pointer to array,
 * Null at error
 */
int **allocate_2d(int width, int height)
{
	int i, **array;

	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array[i] = (int *)malloc(width * sizeof(int));
		if (array[i] == NULL)
		{
			free_grid_temp(array, i);
		}
	}

	return (array);
}
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

	array = allocate_2d(width, height);

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
