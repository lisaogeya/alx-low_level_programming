#include "main.h"
/**
 * print_alphabet -entry of program
 *
 *Return: void
 */

void print_alphabet(void)
{
char alph  = 'a';
while (alph <= 'z')
{
_putchar(alph);
alph++;
}
_putchar('\n');
}
