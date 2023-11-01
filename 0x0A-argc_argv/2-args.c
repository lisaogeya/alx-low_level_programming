#include <stdio.h>
/**
 * main-prints all arguments received
 * @argc:parameter for arguments in program
 * @argv:parameter of array of pointers
 * Return:0
 */
int main(int argc, char *argv[])
{
int arg1;
for (arg1 = 0; arg1 < argc; arg1++)
{
printf("%s\n", argv[arg1]);
}
return (0);
}
