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
_putchar(r *= -1 + '0');
}
return (0);
}
