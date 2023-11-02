#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1:string 1
 * @s2:string 2
 * @n:max number of bytes of s2 to s1
 * Return:NULL if fails else pointer in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concatenate;
int i;
unsigned int length = n;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
for (i = 0; s1[i]; i++)
length++;
concatenate = malloc(sizeof(char) * (length + 1));
if (concatenate == NULL)
return (NULL);
length = 0;
for (i = 0; s1[i]; i++)
concatenate[length++] = s1[i];
for (i = 0; s2[i] && i < n; i++)
concatenate[length++] = s2[i];
concatenate[length] = '\0';
return (concatenate);
}
