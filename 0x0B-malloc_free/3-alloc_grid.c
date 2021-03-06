#include "holberton.h"
/**
 * alloc_grid - Creates a grid and fill it with 0
 * @width: is the width of the grid
 * @height: is the height of the grid
 * Return: a pointer to the dinamic memory of the grid
 */
int **alloc_grid(int width, int height)
{
	int i, j, k;
	int **grid;

	if (width <= 0 && height <= 0)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));

		if (grid[i] == NULL)
		{
			for (k = 0; k <= i; k++)
				free(grid[k]);
			free(grid);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < height; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
