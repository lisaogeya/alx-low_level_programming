#include <stdio.h>
/**
 * main-prints all arguments received
 * @argc:parameter for arguments in program
 * @argv:parameter of array of pointers
 * Return:0
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
return (0);
}
}
