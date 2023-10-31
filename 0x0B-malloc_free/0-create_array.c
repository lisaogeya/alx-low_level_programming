#include "main.h"
#include <stdlib.h>
/**
 *create_array - creates array of characters with specific chars
 *@size:array parameter
 *@c:char parameter
 *Return:0 if size is 0 else NULL
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *arr;

if (size == 0)
{
return (NULL);
}
arr = malloc(sizeof(char) * size);
if (arr == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
arr[i] = c;
return (arr);
}
