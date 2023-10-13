#include "main.h"
/**
 * print_triangle-prints triangle using #
 * @size: Size of triangle
 * Return:void
 */
void print_triangle(int size)
{
int t, i;
if (size > 0)
{
for (t = 1; t <= size; t++)
{
for (i = size - t; i > 0; i--)
_putchar(' ');
for (i = 0; i < t; i++)
_putchar('#');
if (t == size)
continue;
_putchar('\n');
}
}
_putchar('\n');
}
