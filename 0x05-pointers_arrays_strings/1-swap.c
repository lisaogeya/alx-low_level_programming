#include "main.h"
/**
 * swap_int-swaps value of integers
 * @a:pointers
 * @b:pointers
 */
void swap_int(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}
