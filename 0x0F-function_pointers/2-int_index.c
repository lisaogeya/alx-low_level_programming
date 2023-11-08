#include "function_pointers.h"
/**
 * int_index-searches for integer in array of integers
 * @array:array of integers
 * @size:size of array
 * @cmp:pointer to function
 * Return:-1 if size <= 0 else index if function != 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int index;
if (array == NULL || cmp == NULL)
return (-1);
for (index = 0; index < size; index++)
{
if (cmp(array[index]) != 0)
return (index);
}
return (-1);
}
