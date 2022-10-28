#include <stdlib.h>
#include <stdio.h>

/**
* free_grid - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @grid: pointer parmameter
* @height: int parmameter
*/

void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);

	free(grid);
}
