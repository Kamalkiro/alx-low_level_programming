#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - freeing those 2D grid of task 3
 * @grid: is the pointer
 * @height: height of array
 * Return: Nothing at all
 */
void free_grid(int **grid, int height)
{
	int l = 0;

	while (l < height)
	{
		free(grid[l]);
		l++;
	}

	free(grid);
}
