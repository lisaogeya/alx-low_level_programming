#include <stdio.h>

/**
 * main -entry point of the program
 *
 * Description: Software is eating the World
 *
 * Return:0
*/

int main(void)
{
int dig1, dig2, digit1, digit2;

for (dig1 = 0; dig1 <= 9; dig1++)
{
for (dig2 = 0; dig2 <= 9; dig2++)
{
for (digit1 = dig1; digit1 <= 9; digit1++)
{
for (digit2 = (digit1 == dig1) ? dig2 + 1 : 0; digit2 <= 9; digit2++)
{
putchar(dig1 + '0');
putchar(dig2 + '0');
putchar(' ');
putchar(digit1 + '0');
putchar(digit2 + '0');

if (!(dig1 == 9 && dig2 == 9 && digit1 == 9 && digit2 == 9))
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
