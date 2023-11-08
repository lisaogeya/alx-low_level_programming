#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add-returns sum of two integers
 * @a:num 1
 * @b:num 2
 * Return: a + b
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub- returns difference of two numbers
 * @a: num 1
 * @b: num 2
 * Return: a - b
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul -returns product of two numbers
 * @a: num 1
 * @b: num 2
 * Return: a * b
 */
int op_mul(int a, int b)
{
return (a * b);
}


/**
 * op_div -returns division of two numbers
 * @a: num 1
 * @b: num 2
 * Return: a / b
 */
int op_div(int a, int b)
{
return (a / b);
}

/**
 * op_mod -returns remainder of two numbers
 * @a: num 1
 * @b: num 2
 * Return: a % b
 */
int op_mod(int a, int b)
{
return (a % b);
}
