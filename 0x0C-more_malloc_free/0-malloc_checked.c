#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked- allocates memory using malloc
 * @b:parameter number of bytes to be allocated
 * Return:pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
void *t = malloc(b);
if (t == NULL)
{
exit(98);
}
return (t);
}
