#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - a + b
 * @a: a
 * @b: b
 *
 * Return: a + b
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - a - b
 * @a: a
 * @b: b
 *
 * Return: a - b
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - a * b
 * @a: a
 * @b: b
 *
 * Return: a * b
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - a / b
 * @a: a
 * @b: b
 *
 * Return: a/b
 */
int op_div(int a, int b)
{
return (a / b);
}
/**
 * op_mod - mod a/b
 * @a: a
 * @b: b
 *
 * Return: a % b
 */
int op_mod(int a, int b)
{
return (a % b);
}

