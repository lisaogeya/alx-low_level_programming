#include "main.h"
/**
 * factorial -Returns factorial of given number
 * @n:parameter of factorial
 * Return: factorial of n if n > 0 else 1
 */
int factorial(int n)
{
int result = n;
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
result *= factorial(n - 1);
return (result);
}
