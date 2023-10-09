#include <stdio.h>

/**
 * main-entry of program
 * Description:Size is not a grandeour
 * Return:0
*/
int main(void)
{
#ifdef __LP64__
printf("Size of char : %lu byte(s)\n", sizeof(char));
printf("Size of int : %lu byte(s)\n", sizeof(int));
printf("Size of long int : %lu byte(s)\n", sizeof(long int));
printf("Size of long long int : %lu byte(s)\n", sizeof(long long int));
printf("Size of float : %lu byte(s)\n", sizeof(float));
#else
printf("Size of char : %lu byte(s)\n", sizeof(char));
printf("Size of int : %lu byte(s)\n", sizeof(int));
printf("Size of long int : %lu byte(s)\n", sizeof(long int));
printf("Size of long long int : %lu byte(s)\n", sizeof(long long int));
printf("Size of float : %lu byte(s)\n", sizeof(float));
#endif

return (0);
}
