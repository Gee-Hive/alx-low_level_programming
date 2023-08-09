#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: first input param
 * @height: second input param
 * Return: int
 */

int **alloc_grid(int width, int height)
{
	int **_grid;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return ('\0');
	}
	_grid = malloc(height * sizeof(int *));
	if (_grid == NULL)
	{
		return ('\0');
	}
	for (i = 0; i < height; i++)
	{
		_grid[i] = malloc(width * sizeof(int));
		if (_grid[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(_grid[i]);
			}
			free(_grid);
			return ('\0');
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			_grid[i][j] = 0;
		}
	}
	return (_grid);
}


