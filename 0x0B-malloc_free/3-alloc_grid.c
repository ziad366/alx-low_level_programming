#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return: pointer to pointer
*/

int **alloc_grid(int width, int height)
{
int i, j;
int **grid;
if (width < 1 || height < 1)
{
return (NULL);
}
grid = (int **)malloc(sizeof(int *) * height);
if (grid == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
grid[i] = (int *)malloc(sizeof(int) * width);

if (grid[i] == NULL)
{
free(grid);
return (NULL);
}
}

for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
grid[i][j] = 0;
}
}

return (grid);
}
