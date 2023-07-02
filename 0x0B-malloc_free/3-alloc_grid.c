#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - creates a two dimensional array of integers
 * @widith: widith of the matric
 * @height: height of the matrix
 * Return: pointer to created matrix (success)
 * or NULL (error)
 */
int **alloc_grid(int widith, int height)
{
	int **array;
	int x, y;

	if (height <= 0 || widith < 0)
		return (NULL);
	array = (int **) malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		array[x] = (int *) malloc(sizeof(int) * widith);
		if (array[x] == NULL)
		{
			free(array);
			for (y = 0; y <= x; y++)
				free(array[y]);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < widith; y++)
		{
			array[x][y] = 0;
		}
	}
	return (array);
}
