#include <stdio.h>
void myFunc(void) __attribute__((constructor));
/**
 * myFunc- prints string before main function is executed
 */
void myFunc(void)
{
printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
