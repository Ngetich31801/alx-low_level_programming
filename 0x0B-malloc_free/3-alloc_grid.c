#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - function to allocate memory to grid
 * @width: int type
 * @height: int type
 * Return: grid of 0sor null
 */
int **alloc_grid(int width, int height)
{
	int a, b;
	int **p;

	if (width <= 0 || height <= 0)
	{
		return  (NULL);
	}
	p = malloc(height * sizeof(int *));
	if (p == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		p[a] = malloc(width * sizeof(int));
		if (p[a] == NULL)
		{
			for (b = 0; b < a;  b++)
				free(p[b]);
			free(p);
			return (NULL);
		}
		for (b = 0; b < width; b++)
		{
			p[a][b] = 0;
		}
	}
	return (p);
}
