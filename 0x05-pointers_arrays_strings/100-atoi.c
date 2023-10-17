#include "main.h"
/**
 * _atoi - converts string to integer
 * @s:pointer parameter
 * Return:0
 */
int _atoi(char *s)
{
int sign = 1;
unsigned int number = 0;
while (*s)
{
if (*s == '-')
{
sign *= -1;
}
else if
(*s >= '0' && *s <= '9')
{
number = (number * 10) + (*s - '0');
}
else if
(number > 0)
{
break;
}
s++;
}
return (number *sign);
}
