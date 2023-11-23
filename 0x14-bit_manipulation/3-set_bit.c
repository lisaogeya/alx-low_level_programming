#include "main.h"
/**
 * set_bit-sets value of a bit at a given index
 * @n:pointer to bit
 * @index:index to set indices value
 * Return:-1 if error else 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
{
return (-1);
}
*n ^= (1 << index);
return (1);
}
