#include "main.h"
#include <stdlib.h>
/**
 * argstostr - Concatenates arguments of program into  string
 * @ac: number of arguments passed to program.
 * @av:array of pointers to arguments
 * Return: If ac == 0, av == NULL-- NULL else pointer to the new string.
 */
char *argstostr(int ac, char **av)
{
int byte;
char *str;
int i;
int arg;
int size = ac;
if (ac == 0 || av == NULL)
return (NULL);
for (arg = 0; arg < ac; arg++)
{
for (byte = 0; av[arg][byte]; byte++)
size++;
}
str = malloc(sizeof(char) * size + 1);
if (str == NULL)
return (NULL);
i = 0;
for (arg = 0; arg < ac; arg++)
{
for (byte = 0; av[arg][byte]; byte++)
str[i++] = av[arg][byte];

str[i++] = '\n';
}
str[size] = '\0';
return (str);
}
