#include "main.h"
/**
 * _putchar- writes character to stdout
 * @c:character
 * Return 1 else -1
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
