#include "main.h"
/**
 * puts_half-prints half a string followed by new line
 * @str:pointer parameters
 */
void puts_half(char *str)
{
int index = 0;
int length = 0;
int n;
while (str[index++])
length++;
if ((length % 2) == 0)
n = length / 2;
else
n = (length + 1) / 2;
for (index = n; index < length; index++)
_putchar('\n');
}
