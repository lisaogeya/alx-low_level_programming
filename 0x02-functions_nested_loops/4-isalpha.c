#include "main.h"

/**
 * _isalpha- entry point of the program
 *@c: check for parameters
 * Return:1 if true
 * Returns: 0 if false
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
