#include <stdio.h>
/**
 * main - entry point of program
 *
 * Description: Hexadecimal
 *
 * Return:0
*/
int main(void)
{
int i;
for (i = 0; i < 16; i++)
{
if (i < 10)
{
putchar(i + '0');
}
else
{
putchar('a' + (i - 10));
}
}
putchar('\n');
return (0);
}
