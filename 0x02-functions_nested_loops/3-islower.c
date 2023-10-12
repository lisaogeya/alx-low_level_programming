#include "main.h"

/**
 * _islower- main entry point of program
 * @c:parameter to be checked
 * Return:1 if true
 * Returns:0 if false
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
