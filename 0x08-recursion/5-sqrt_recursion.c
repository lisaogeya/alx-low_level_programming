#include "main.h"
/**
 *get_sqrt -finds square root of a number
 *@num:parameter to be tested
 *@sqr:root parameter to be tested
 *Return:square root if found else -1
 */
int get_sqrt(int num, int sqr)
{
if ((sqr * sqr) == num)
{
return (sqr);
}
if (sqr == num / 2)
{
return (-1);
}
return (get_sqrt(num, sqr + 1));
}

/**
 * _sqrt_recursion - Returns natural sqrt of a number
 * @n: parameter number
 * Return:square root of n else -1
 */
int _sqrt_recursion(int n)
{
int sqr = 0;
if (n < 0)
{
return (-1);
}
if (n == 1)
{
return (1);
}
return (get_sqrt(n, sqr));
}
