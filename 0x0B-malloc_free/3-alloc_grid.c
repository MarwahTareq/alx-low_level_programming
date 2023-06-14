#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - creating 2 dimensional array of integers.
 * @width: number of coulmns
 * @height: numbers of rows
 * Return: a pointer 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int i, j, **matrix;

	if (width <= 0 || height <= 0)
		return (NULL);
	matrix = malloc(height * sizeof(int *));
	if (matrix == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		matrix[i] = malloc(width * sizeof(int));
		if (matrix[i] == NULL)
		{
			for (j = i - 1; j >= 0; j--)
				free(matrix[j]);
			free(matrix);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			matrix[i][j] = 0;
	}
	return (matrix);
}
