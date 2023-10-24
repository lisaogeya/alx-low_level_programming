#include <stdio.h>
/**
 * _strchr- locates character in a string
 * @s: String to be located
 * @c: character to be located
 * Return:If c is located-pointer to first occurrence else NULL
 */
char *_strchr(char *s, char c)
{
int i;
while (s[i] != '\0')
{
if (s[i] == c)
{
return (s);
}
s++;
}
if (s[i] == c)
{
return (s);
}
return (NULL);
}
