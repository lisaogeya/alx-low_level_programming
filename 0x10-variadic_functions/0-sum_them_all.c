#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns sum of all parameters
 * @n:number of parameters passed
 * @...: variable number of parameters to calculate sum
 * Return:0  If n == 0 else sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
va_list num;
unsigned int i;
unsigned int sum = 0;

va_start(num, n);
for (i = 0; i < n; i++)
sum += va_arg(num, int);

va_end(num);
return (sum);
}
