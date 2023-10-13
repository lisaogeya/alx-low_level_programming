#include "main.h"
/**
 * more_numbers-Prints numbers 0-14 ten times
 * Return:void
 */
void more_numbers(void)
{
int num, count;
for (count = 0; count <= 9; count++)
{
for (num = 0; num <= 14; num++)
{
if (num > 9)
_putchar('0' + num);
_putchar('0' + num);
}
_putchar('\n');
}
}
