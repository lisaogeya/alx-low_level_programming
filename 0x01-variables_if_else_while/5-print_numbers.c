#include<stdio.h>

/**
 * main - Entry point of the program
 *
 * Description :Numbers
 *
 * Return:0
*/

int main(void)
{
int number = 0;

while (number <= 9)
{
putchar(number + '0');
number++;
}
return (0);
}