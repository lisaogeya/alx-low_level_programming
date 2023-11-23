#include "main.h"
/**
 * binary_to_uint-converts binary number to unsigned int
 * @b:pointer to string-0 & 1
 * Return:if b -NULL else number converted
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int multiply = 1;
unsigned int number = 0;
int length;
if (b == NULL)
return (0);

for (length = 0; b[length];)
{
length++;
}
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
