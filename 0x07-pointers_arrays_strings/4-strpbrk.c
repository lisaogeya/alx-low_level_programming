#include "main.h"
/**
 * _strpbrk - searches string for set of bytes
 * @s:string to be searched
 * @accept:bytes to be searched for
 * Return:if set is matched-pointer else NULL
 */
char *_strpbrk(char *s, char *accept)
{
int i;
while (*s != '\0')
{
for (int i = 0; accept[i] != '\0'; i++)
{
if (*s == accept[i])
{
return (s);
}
}
s++;
}
return (NULL);
}
