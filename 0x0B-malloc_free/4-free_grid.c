#include "main.h"
#include <stdlib.h>
/**
 * free_grid- frees 2d array
 * @grid:parameter array to be freed
 * @height:grid height
 *
 */
void free_grid(int **grid, int height)
{
if (grid == NULL)
{
return;
}
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
