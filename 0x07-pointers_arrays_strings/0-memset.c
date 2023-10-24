#include "main.h"
/**
 *_memset- fills first n bytes of memory
 * @s:pointer to memory
 * @b:parameter to be used in filling memory
 * @n:number of bytes
 * Return: pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}

