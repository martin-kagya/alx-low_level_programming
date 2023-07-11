#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees the memory allocated
 * @grid: a two dimentional array input
 * @height:ght of the array to be printed
 * Return: Always 0
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
