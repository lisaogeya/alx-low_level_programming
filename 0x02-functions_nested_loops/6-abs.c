#include "main.h"
/**
 * _abs- absolute value of integer
 *@r:parameters to be checked
 * Return:0
 */
int _abs(int r)
{
if (r >= 0)
{
_putchar('0' + r);
}
else
{
r *= -1;
_putchar('0' + r);
}
return (0);
}
