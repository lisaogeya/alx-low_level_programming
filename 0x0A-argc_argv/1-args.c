#include <stdio.h>
/**
 * main-entry point of program that prints arguments passed
 * @argc:parameter for arguments in program
 * @argv:parameter for array of pointers to arguments
 * Return:0
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
printf("%d\n", argc - 1);
return (0);
}
