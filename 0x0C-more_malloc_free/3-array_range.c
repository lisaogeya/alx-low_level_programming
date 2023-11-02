#include "main.h"
#include <stdlib.h>
/**
 * array_range- creates array of integers from min to max
 * @min:first array value
 * @max:last array value
 * Return:NULL if min > max
 */
int *array_range(int min, int max)
{
int *arr;
int size;
int i;
if (min > max)
{
return (NULL);
}
size = max - min + 1;
arr = malloc(sizeof(int) * size);
if (arr == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
arr[i] = min++;
}
return (arr);
}
