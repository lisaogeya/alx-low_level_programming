#include "main.h"
/**
 * _strcat- concatenates two strings
 * @dest:string destination
 * @src:string source
 * Return:pointer
 */
char *_strcat(char *dest, char *src)
{
char *ptr = dest;

while (*dest != '\0')
{
dest++;
}

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}

*dest = '\0';
return (ptr);
}
