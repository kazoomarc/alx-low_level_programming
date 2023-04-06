#include "main.h"
/**
 *_sqrt_recursion - calcualate square root
 * @n: to compute sqrt for
 *Return: the root of n
 */
int _sqrt_recursion(int n)
{
int result;
if (n < 0)
{
return (-1);
}
if (n == 0 || n == 1)
{
return (n);
}
result = _sqrt_recursion(n / 2);
if (result == -1)
{
return (-1);
}
if (result *result <= n && (result + 1) * (result + 1) > n)
{
return (result);
}
else
{
return (_sqrt_recursion((n / result + result) / 2));
}
}
