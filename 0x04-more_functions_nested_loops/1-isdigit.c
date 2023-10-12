#include "main.h"
/**
 * _isdigit - che ks for digits between 0 to 9
 * @c: Parameter to be checked
 * Return:1 if number is a digit, otherwise 0
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
