#include "main.h"
/**
 * _strcpy -copies string pointed to by src
 * @dest:pointer
 * @src:pointer
 * Return:dest
 */
char *_strcpy(char *dest, char *src)
{
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (dest);
}
