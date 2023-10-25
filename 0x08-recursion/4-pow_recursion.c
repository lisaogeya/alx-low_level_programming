#include "main.h"
/**
 * _pow_recursion - return value x raised to power of y
 * @x: parameter to be raised
 * @y:power
 * Return: value of x raised to power of y
 */
int _pow_recursion(int x, int y)
{
int result = x;
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
result *= _pow_recursion(x, y - 1);
return (result);
}
