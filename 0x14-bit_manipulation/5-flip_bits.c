#include "main.h"
/**
 * flip_bits- counts number of bits needed
 * @n:number
 * @m:number to flip
 * Return:number required to flip from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int x = n ^ m;
unsigned long int bit = 0;
while (x > 0)
{
bit += (x & 1);
x >>= 1;
}
return (bit);
}
