#include "main.h"
/**
 * reverse_array-prints strings in reverse
 * @a:array of integers
 * @n:number of elements
 * Return:0
 */
void reverse_array(int *a, int n)
{
int i = 0;
while (i < n)
{
if (i != 0)
{
_putchar(',');
}
_putchar(a[i]);
i++;
}
_putchar('\n');
}
