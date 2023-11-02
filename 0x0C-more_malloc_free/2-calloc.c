#include "main.h"
#include <stdlib.h>
/**
 * _calloc-allocates memory for array of a certain number of elements
 * @nmemb:number of elements
 * @size:byte size of each array element
 * Return:NULL if function fails,size is 0, nmemb is 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *memry;
char *p;
unsigned int i;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
memry = malloc(size * nmemb);
if (memry == NULL)
{
return (NULL);
}
p = memry;
for (i = 0; i < (size * nmemb); i++)
{
p[i] = '\0';
}
return (memry);
}
