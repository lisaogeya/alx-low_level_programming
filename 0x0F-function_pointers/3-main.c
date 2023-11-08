#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main-prints results
 * @argc:arguments
 * @argv: Array of pointers to the arguments
 * Return:0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
int num1;
int num2;
char *op;

if (argc != 4)
{
printf("Errot\n");
exit(98);
}
num1 = atoi(argv[1]);
op = argv[2];
num2 = atoi(argv[3]);

if (get_op_func(op) == NULL || op[1] != '\0')
{
printf("Error\n");
exit(99);
}
if ((*op == '/' && num2 == 0) ||
(*op == '%' && num2 == 0))
{
printf("Error\n");
exit(100);
}
printf("%d\n", get_op_func(op)(num1, num2));
return (0);
}
