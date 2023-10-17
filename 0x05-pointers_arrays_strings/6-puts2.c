#include "main.h"
/**
 * puts2-prints every other character of a string
 * @str:pointer parameters
 */
void puts2(char *str)
{
int index = 0;
int length = 0;
while (str[index++])
length++;
for (index = 0; index < length; index += 2)
_putchar(str[index]);
_putchar('\n');
}
