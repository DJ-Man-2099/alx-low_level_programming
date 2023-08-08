#include <stdlib.h>
#include "main.h"
/**
 * free_grid - array function
 * @grid: array to free
 * @height: dimension
 *
 * frees a 2d array
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = height - 1; i >= 0; i--)
	{

		free(grid[i]);
	}
	free(grid);
}
