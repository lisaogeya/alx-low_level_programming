#include "main.h"

/**
 * print_alphabet_x10-entry point of the program
 * Return :void
 */

void print_alphabet_x10(void)
{
int i;
for (i = 0; i < 10; i++)
{
char alph = 'a';
while (alph <= 'z')
{
_putchar(alph);
alph++;
}
_putchar('\n');
}
}

