#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns pointer to new allocated space in memory
 * @str:parameter string to be copied
 * Return:NULL if str is equal to NULL else pointer
 */
char *_strdup(char *str)
{
int i;
int length = 0;
char *cpy;

if (str == NULL)
{
return (NULL);
}
for (i = 0; str[i]; i++)
{
length++;
}
cpy = malloc(sizeof(char) * (length + 1));

if (cpy == NULL)
{
return (NULL);
}
for (i = 0; str[i]; i++)
{
cpy[i] = str[i];
}
cpy[length] = '\0';

return (cpy);
}
