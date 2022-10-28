#include <stdlib.h>
#include <stdio.h>

/**
* alloc_grid - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @width: int parmameter
* @height: int parmameter
*/

int **alloc_grid(int width, int height)
{
	int **ptr = (int **) malloc(height * sizeof(int *));
	int x, y;

	if (width * height == 0 || ptr == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		 ptr[x] = malloc(width * sizeof(int));
		 if (ptr[x] == NULL)
			 return (NULL);
	}

	for (y = 0; y < height; y++)
		for (x = 0; x < width; x++)
			ptr[y][x] = 0;

	return (ptr);
}
