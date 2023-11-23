#include "main.h"
/**
 * binary_to_uinit-converts binary number to unsigned integer
 * @b:pointer to string 0 amd 1
 * Return:if b is NULL
 */
unsigned int binary_to_uinit(const char *b)
{
int length;
unsigned int number = 0;
unsigned int multiply;

if (b == NULL)
return (0);

for (length = 0; b[length];)
length++;

for (length -= 1; length >= 0; length--)
{
if (b[length] != '0' && b[length] != '1')
{
return (0);
}
number += (b[length] - '0') * multiply;
multiply *= 2;
}
return (number);
}
