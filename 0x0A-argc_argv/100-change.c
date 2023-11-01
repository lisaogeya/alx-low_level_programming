#include <stdio.h>
#include <stdlib.h>
/**
 * main-prints min number of coins for change
 * @argc:number of parameter arguments
 * @argv: parameter for array of pointers to arguments
 * Return:1 if arguments is not exactly one else 0
 */
int main(int argc, char *argv[])
{
int coins = 0;
if (argc != 2)
{
printf("Error\n");
return (1);
}
int cents = atoi(argv[1]);
while (cents > 0)
{
coins++;
if ((cents - 25) >= 0)
{
cents -= 25;
continue;
}
if ((cents - 10) >= 0)
{
cents -= 10;
continue;
}
if ((cents - 5) >= 0)
{
cents -= 5;
continue;
}
if ((cents - 2) >= 0)
{
cents -= 2;
continue;
}
cents--;
}
printf("%d\n", coins);
return (0);
}
