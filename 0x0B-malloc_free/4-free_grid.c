#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees the memory used by a 2d array
 * @grid: the array to be worked on
 * @height: height of array
 * Return: 0
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
