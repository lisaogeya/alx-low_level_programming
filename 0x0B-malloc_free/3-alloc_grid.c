#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid-returns pointer to 2d array
 * @width: width of 2d array
 * @height:height of 2d array
 * Return:NULL if width && height <= 0
 */
int **alloc_grid(int width, int height)
{
int hght_i;
int wth_i;
int **two_d;

if (width <= 0 || height <= 0)
{
return (NULL);
}
for (hght_i = 0; hght_i < height; hght_i++)
{
two_d[hght_i] = malloc(sizeof(int) * width);
if (two_d[hght_i] == NULL)
{
for (; hght_i >= 0; hght_i--)
free(two_d[hght_i]);

free(two_d);
return (NULL);
}
}
for (hght_i = 0; hght_i < height; hght_i++)
{
for (wth_i = 0; wth_i < width; wth_i++)
two_d[hght_i][wth_i] = 0;
}
return (two_d);
}



