#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates previously allocated memory
 * @ptr:pointer to previously allocated memory
 * @old_size:size in bytes of alocated ptr space
 * @new_size:size in bytes for new memory block
 * Return:ptr if new size == old size else ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *memry;
char *a;
char *ptr_cp;
unsigned int i;

if (new_size == old_size)
{
return (ptr);
}
if (ptr == NULL)
{
memry = malloc(new_size);
if (memry == NULL)
{
return (NULL);
}
return (memry);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
ptr_cp = ptr;
memry = malloc(sizeof(*ptr_cp) * new_size);

if (memry == NULL)
{
free(ptr);
return (NULL);
}
a = memry;
for (i = 0; i < old_size && i < new_size; i++)
{
a[i] = *ptr_cp++;
}
free(ptr);
return (memry);
}
