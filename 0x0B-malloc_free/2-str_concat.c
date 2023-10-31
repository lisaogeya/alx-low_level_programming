#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1:string parameter
 * @s2:String parameter
 * Return:NULL if concat fails else pointer
 */
char *str_concat(char *s1, char *s2)
{
int i;
int length = 0;
int j = 0;
char *str;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
for (i = 0; s1[i] || s2[i]; i++)
{
length++;

str = malloc(sizeof(char) * length);
}
if (str == NULL)
{
return (NULL);
}
for (i = 0; s2[i]; i++)
{
str[j++] = s1[i];
}
for (i = 0; s2[i]; i++)
{
str[j++] = s2[i];
}
return (str);
}
