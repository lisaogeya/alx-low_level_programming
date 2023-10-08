#include<stdio.h>

/**
 * main -Entry point
 * Description: When i was having that alphabet soup
 * Return: 0
*/

int main(void)
{
char letter = 'a';

while (letter <= 'z')
{
if (letter != 'e' && letter != 'q')
{
	putchar (letter);
}
letter++;
}
putchar('\n');
return (0);
}
