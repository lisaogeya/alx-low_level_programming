#include "main.h"
/**
 * get_endianness- checks endianness
 * Return:0 if big-endian else 1 if little-endian
 */
int get_endianness(void)
{
int number = 1;
char *e = (char *)&number;
if (*e == 1)
{
return (1);
}
return (0);
}
