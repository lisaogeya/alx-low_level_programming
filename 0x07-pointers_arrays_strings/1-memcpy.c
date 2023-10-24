#include "main.h"
/**
 * _memcpy-copies n byte from memory
 * @dest:memory destination to be copied
 * @src:memory source to be copied from
 * @n:number of bytes to be copied
 * Return:dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
