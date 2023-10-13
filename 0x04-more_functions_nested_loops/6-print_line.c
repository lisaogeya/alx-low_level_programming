#include "main.h"
/**
 * print_line - Draws straight line using
 * @n: number of _ to be printed
 * Return: void
 */
void print_line(int n)
{
int line;

if (n > 0)
{
for (line = 0; line < n; line++)
_putchar('_');
}
_putchar('\n');
}
