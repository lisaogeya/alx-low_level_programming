#include "main.h"
/**
 * main-Print the first 98 Fibonacci numbers
 * Return:0
 */
int main(void)
{
int count;
unsigned long fib1 = 0, fib2 = 1, sum;
unsigned long fib1_a, fib1_b, fib2_a, fib2_b;
unsigned long a, b;
for (count = 0; count < 92; count++)
{
sum = fib1 + fib2;
printf("%lu, ", sum);

fib1 = fib2;
fib2 = sum;
}
fib1_a = fib1 / 10000000000;
fib1_a = fib2 / 10000000000;
fib1_b = fib1 % 10000000000;
fib1_b = fib2 % 10000000000;
for (count = 93; count < 99; count++)
{
a = fib1_a + fib2_a;
b = fib1_b + fib2_b;
if (fib1_b + fib2_b > 9999999999)
{
a += 1;
b %= 10000000000;
}
printf("%lu%lu", a, b);
if (count != 98)
printf(", ");

fib1_a = fib2_a;
fib1_b = fib2_b;
fib2_a = a;
fib2_b = b;
}
printf("\n");
return (0);
}
