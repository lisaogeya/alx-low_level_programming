#include "main.h"
/**
 *_puts-prints string to std output
 *@str:parameters to be checked
 */
void _puts(char *str)
{
while (*str)
_putchar(*str++);
_putchar('\n');
}

