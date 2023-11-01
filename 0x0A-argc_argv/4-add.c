#include <stdio.h>
#include <stdlib.h>
/**
 * main-addition of positive numbers
 * @argc:parameter arguments passed
 * @argv:array of pointers to arguments
 * Return:1 if not fully digit else 0
 */
int main(int argc, char *argv[])
{
int i;
int num;
int sum = 0;
for (num = 1; num < argc; num++)
{
for (i = 0; argv[num][i]; i++)
{
if (argv[num][i] < '0' || argv[num][i] > '9')
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[num]);
}
printf("%d\n", sum);
return (0);
}
