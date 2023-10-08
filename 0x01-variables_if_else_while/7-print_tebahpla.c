#include<stdio.h>

/**
 * main - Entry point of the program
 *
 * Description:Smile in the mirror
 *
 * Return:0
*/

int main(void)
{
char letter = 'z';

while (letter >= 'a')
{
putchar(letter);
letter--;
}
putchar('\n');

return (0);
}

