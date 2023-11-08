#include <stdio.h>
#include <stdlib.h>
/**
 * main- prints the opcodes of itself
 * @argc:number of arguments
 * @argv:an array of pointers to arguments
 * Return:0
 */
int main(int argc, char *argv[])
{
int (*address)(int, char **) = main;
unsigned char opcode;

if (argc != 2)
{
printf("Error\n");
exit(1);
}
int bytes = atoi(argv[1]);

if (bytes < 0)
{
printf("Error\n");
exit(2);
}
int i;
for (i = 0; i < bytes; i++)
{
opcode = *(unsigned char *)address;
printf("%.2x", opcode);

if (i == bytes - 1)
continue;
printf(" ");

address++;
}
printf("\n");
return (0);
}

