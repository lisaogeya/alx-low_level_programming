#include <stdio.h>
#include <stdlib.h>
/**
 * main-multiplication of two numbers
 * @argc: parameter arguments
 * @argv:parameter for array of pointers
 * Return:0 if has two arguments else 1
 */
int main(int argc, char *argv[])
{
int a;
int b;
int mult;

if (argc != 3)
{
printf("Error\n");
return (1);
}
a = atoi(argv[1]);
b = atoi(argv[2]);
mult = a *b;

printf("%d\n", mult);
return (0);
}
